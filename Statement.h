#include<stdio.h>
#include<stdint.h>

#define COLUMN_USERNAME_SIZE 32;
#define COLUMN_EMAIL_SIZE 255;


typedef enum { STATEMENT_INSERT, STATEMENT_SELECT,PREPARE_SYNTAX_ERROR } StatementType;

typedef struct 
{
  uint32_t id;
  char username[COLUMN_USERNAME_SIZE];
  char email[COLUMN_EMAIL_SIZE];
} Row;


typedef struct {
  StatementType type;
  Row row_to_insert;
} Statement;