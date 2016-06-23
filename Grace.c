#include<stdio.h>
/*
uesh
*/
#define UNO
#define DOS
#define FT(x) int main(){FILE*f = fopen("Grace_kid.c", "w");char*a="#include<stdio.h>%c/*%cuesh%c*/%c#define%cUNO%c#define%cDOS%c#define%cFT(x)%cint%cmain(){FILE*f = fopen(%cGrace_kid.c%c, %cw%c);char*a=%c%s%c;fprintf(f,a,10,10,10,10,32,10,32,10,32,32,32,34,34,34,34,34,a,34,10,10);}%cFT(42)%c";fprintf(f,a,10,10,10,10,32,10,32,10,32,32,32,34,34,34,34,34,a,34,10,10);}
FT(42)
