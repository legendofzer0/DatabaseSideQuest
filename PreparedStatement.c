#include "InputBuffer.h"
#include "Statement.h"
#include <string.h>
#include<stdio.h>


typedef enum { PREPARE_SUCCESS, PREPARE_UNRECOGNIZED_STATEMENT, PREPARE_SYNTAX_ERROR } PrepareResult;

PrepareResult prepare_statement(InputBuffer* input_buffer,
    Statement* statement) {
        if (strncmp(input_buffer->buffer, "insert", 6) == 0) {
            printf("%s", input_buffer->buffer);

statement->type = STATEMENT_INSERT;
int args_assigned= scanf(
    input_buffer->buffer,"insert %d %s %s",&(statement->row_to_insert.id),
    statement->row_to_insert.username,statement->row_to_insert.email
);
if (args_assigned<3){
    return PREPARE_SYNTAX_ERROR;
}
return PREPARE_SUCCESS;
}
if (strcmp(input_buffer->buffer, "select") == 0) {
statement->type = STATEMENT_SELECT;
return PREPARE_SUCCESS;
}

return PREPARE_UNRECOGNIZED_STATEMENT;
}