#ifndef LEXER_H
#define LEXER_H
#include "token.h"

typedef struct LEXER_DATA{
    char c;
    unsigned int index;
    char* contents;
} lexer_D;

lexer_D* lexer_initialize(char* contents);

void lexer_advance(lexer_D * lexer);

void lexer_skip_whitespace(lexer_D* lexer)

#endif
