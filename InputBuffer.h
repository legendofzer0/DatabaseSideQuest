#include <stddef.h>
#include <sys/types.h>

#ifndef INPUTBUFFERHEADER_H
#define INPUTBUFFERHEADER_H

typedef struct{
    char* buffer;
    size_t buffer_length;
    ssize_t input_length;
} InputBuffer;

InputBuffer* new_input_buffer(void);
void read_input(InputBuffer* input_buffer);
void close_input_buffer(InputBuffer* input_buffer);

#endif //INPUTBUFFERHEADER_H
