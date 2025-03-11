#include "InputBuffer.h"
typedef enum {
    META_COMMAND_SUCCESS,
    META_COMMAND_UNRECOGNIZED_COMMAND
  } MetaCommandResult;

MetaCommandResult do_meta_command(InputBuffer* inputBuffer);