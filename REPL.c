#include <stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "InputBuffer.h"
#include "PrintPrompt.h"

int main(int argc,char *argv[]){
  InputBuffer* inputbuffer=new_input_buffer();
  while(true){
    print_prompt();
    read_input(inputbuffer);

    if(strcmp(inputbuffer->buffer,"exit")==0){
      close_input_buffer(inputbuffer);
      exit(EXIT_SUCCESS);
    } else{
      printf("Unrecognized Command %s",inputbuffer->buffer);
    }
  }
}