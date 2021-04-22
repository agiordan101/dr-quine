# include <stdio.h>
# include <fcntl.h>
# define CODE "# include <stdio.h>%c# include <fcntl.h>%c# define CODE %c%s%c%c# define FD open(%cGrace_kid.c%c, O_CREAT | O_TRUNC | O_RDWR, 0777)%c# define CLONE(el, quote) int main(){dprintf(FD, CODE, el, el, quote, CODE, quote, el, quote, quote, el, el, el, el, el, el);}%c/*%c	Comment t'es ? Rrr... :)%c*/%cCLONE(10, 34)%c"
# define FD open("Grace_kid.c", O_CREAT | O_TRUNC | O_RDWR, 0777)
# define CLONE(el, quote) int main(){dprintf(FD, CODE, el, el, quote, CODE, quote, el, quote, quote, el, el, el, el, el, el);}
/*
	Comment t'es ? Rrr... :)
*/
CLONE(10, 34)
