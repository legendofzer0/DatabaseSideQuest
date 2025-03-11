#include "InputBuffer.h"

typedef enum {
    META_COMMAND_SUCCESS,
    META_COMMAND_UNRECOGNIZED_COMMAND
  } MetaCommandResult;
  


MetaCommandResult do_meta_command(InputBuffer* inputBuffer){
    if (strcmp(inputBuffer->buffer, ".exit") == 0) {
        void close_input_buffer(inputBuffer);
        printf("Exit Successful");
      } else {
        return META_COMMAND_UNRECOGNIZED_COMMAND;
      }
}