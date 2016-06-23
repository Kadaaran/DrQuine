#include<stdio.h>
/*
	uesh
*/
#define UNO
#define DOS
#define FT(x) int main(){FILE*f = fopen("Grace_kid.c", "w");char*a="#include<stdio.h>%1$c/*%1$c%2$cuesh%1$c*/%1$c#define UNO%1$c#define DOS%1$c#define FT(x) int main(){FILE*f = fopen(%3$cGrace_kid.c%3$c, %3$cw%3$c);char*a=%3$c%4$s%3$c;fprintf(f,a,10,9,34,a);}%1$cFT(42)%1$c";fprintf(f,a,10,9,34,a);}
FT(42)
