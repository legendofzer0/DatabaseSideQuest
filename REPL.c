#include <stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "InputBuffer.h"
#include "PrintPrompt.h"
#include "MetaCommand.h"
#include "PreparedStatement.h"
#include "Statement.h"

int main(int argc,char *argv[]){
  InputBuffer* inputbuffer=new_input_buffer();
  int prepare_statement(inputbuffer_t *inputbuffer, statement_t *statement);
  void execute_statement(statement_t *statement);

  while(true){
    print_prompt();
    read_input(inputbuffer);

    if(strcmp(inputbuffer->buffer, ".") == 0){
      switch (do_meta_command(inputbuffer))
      {
        case (META_COMMAND_SUCCESS):
                continue;
        case (META_COMMAND_UNRECOGNIZED_COMMAND):
                printf("Unrecognized command '%s'\n", inputbuffer->buffer);
                continue;
      }
    }
    Statement statement;
    switch (prepare_statement(inputbuffer, &statement))
    {
    case (PREPARE_SUCCESS):
      break;
    
    case (PREPARE_UNRECOGNIZED_STATEMENT):
      printf("Unrecognized keyword at start of '%s'.\n",inputbuffer->buffer);
      continue;
    }
    execute_statement(&statement);
    printf("Executed.\n");


  }
}