#include <stdio.h>
void	clone(char *code, char eol, char quote)
{
	printf(code, eol, eol, eol, eol, eol, eol, eol, eol, eol, eol, quote, code, quote, eol, eol, eol, eol, eol, eol);
}
/*
	Comme en Terre
*/
int		main()
{
	char *code = "#include <stdio.h>%cvoid	clone(char *code, char eol, char quote)%c{%c	printf(code, eol, eol, eol, eol, eol, eol, eol, eol, eol, eol, quote, code, quote, eol, eol, eol, eol, eol, eol);%c}%c/*%c	Comme en Terre%c*/%cint		main()%c{%c	char *code = %c%s%c;%c	/*%c		3.14%c	*/%c	clone(code, 10, 34);%c}%c";
	/*
		3.14
	*/
	clone(code, 10, 34);
}
