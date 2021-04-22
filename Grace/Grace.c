# include <stdio.h>
# include <fcntl.h>
# define CODE "# include <stdio.h>%c# include <fcntl.h>%c# define CODE %c%s%c%c# define FD open(%cGrace_kid.c%c, O_CREAT | O_TRUNC | O_RDWR, 0777)%c# define CLONE(eol, quote) int main(){dprintf(FD, CODE, eol, eol, quote, CODE, quote, eol, quote, quote, eol, eol, eol, eol, eol, eol);}%c/*%c	Comment t'es ? Rrr... :)%c*/%cCLONE(10, 34)%c"
# define FD open("Grace_kid.c", O_CREAT | O_TRUNC | O_RDWR, 0777)
# define CLONE(eol, quote) int main(){dprintf(FD, CODE, eol, eol, quote, CODE, quote, eol, quote, quote, eol, eol, eol, eol, eol, eol);}
/*
	Comment t'es ? Rrr... :)
*/
CLONE(10, 34)
