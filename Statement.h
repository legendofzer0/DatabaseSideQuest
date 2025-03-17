#ifndef STATEMENT_HEADER_H
#define STATEMENT_HEADER_H

#include <stdint.h>

#define COLUMN_USERNAME_SIZE 32
#define COLUMN_EMAIL_SIZE 255

// Statement Types Enum
typedef enum {
    STATEMENT_INSERT,  // Insert statement
    STATEMENT_SELECT,  // Select statement
    SYNTAX_ERROR       // Syntax error
} StatementType;

// Statement alias for StatementType
typedef StatementType statement_t;

// Row structure to hold user data
typedef struct {
    uint32_t id;
    char username[COLUMN_USERNAME_SIZE];
    char email[COLUMN_EMAIL_SIZE];
} Row;

// Statement structure to represent SQL statements
typedef struct {
    statement_t type;      // Type of the statement (Insert, Select, etc.)
    Row row_to_insert;     // Row for Insert statement
} Statement;

// Function declarations
void print_row(Row *row);
void print_statement(Statement *statement);

// Declare execute_statement function
void execute_statement(Statement *statement);

#endif // STATEMENT_HEADER_H
