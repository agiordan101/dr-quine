# include <stdio.h>
# define CODE "# include <stdio.h>%c# define CODE %c%s%c%c# define FD fopen(%cGrace_kid.c%c, %cw%c)%c# define CLONE(el, quote) int main(){fprintf(FD, CODE, el, quote, CODE, quote, el, quote, quote, quote, quote, el, el, el, el, el, el);}%c/*%c	Comment t'es ? Rrr... :)%c*/%cCLONE(10, 34)%c"
# define FD fopen("Grace_kid.c", "w")
# define CLONE(el, quote) int main(){fprintf(FD, CODE, el, quote, CODE, quote, el, quote, quote, quote, quote, el, el, el, el, el, el);}
/*
	Comment t'es ? Rrr... :)
*/
CLONE(10, 34)
