%{
#include <stdio.h>
int p=0, n=0;
%}

%%
-[0-9]+  { n++; printf("Negative = %s\n", yytext); }
[0-9]+   { p++; printf("Positive = %s\n", yytext); }
[ \t\n]+ ;
%%

int main()
{
    yylex();
    printf("Positive count = %d\n", p);
    printf("Negative count = %d\n", n);
    return 0;
}

int yywrap()
{
    return 1;
}
