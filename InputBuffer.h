#ifndef INPUTBUFFERHEADER_H
#define INPUTBUFFERHEADER_H

#include <stddef.h>
#include <sys/types.h>

// Typedef for inputbuffer_t to match the usage in your source files
typedef struct {
    char* buffer;
    size_t buffer_length;
    ssize_t input_length;
} InputBuffer;

// Alias for InputBuffer type
typedef InputBuffer inputbuffer_t;

// Function prototypes
inputbuffer_t* new_input_buffer(void);
void read_input(inputbuffer_t* input_buffer);
void close_input_buffer(inputbuffer_t* input_buffer);

#endif // INPUTBUFFERHEADER_H
