%{
/* This file is part of NLPTEXT
#include "number.h"
#include "version.h"
#include "extra.h"
#include "function.h"

%}

%union{char id ;int num;list slist}
%start program //start symbole of grammar



/* precedence */
%left OR
%left AND
%nonassoc NOT
%left REL_OP
%right ASSIGN_OP
%left '+' '-'
%left MUL_OP
%right '^'
%nonassoc UNARY_MINUS
%nonassoc INCR_DECR

%%
program			:   {printf("%s\n",VERSION);
				        {about();}
			        | program input
              ;

input       : | input extra
              | operator
              ;

extra       : | special
              | feedback
              | about
              | help
              ;

operator    : |
