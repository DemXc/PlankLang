#ifndef TOKEN_H
#define TOKEN_H

typedef struct TOKEN_DATA
{

	enum
	{
		TOKEN_ID,
		TOKEN_EQUALS,
		TOKEN_STRING,
		TOKEN_SEMI,
		TOKEN_LRAPER,
		TOKEN_RPAREN
	}type;
	
} token_D;

token_D* token_initialize(int type, char* value);

#endif
