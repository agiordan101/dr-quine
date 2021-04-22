#include <stdio.h>
void	clone(char *code, char el, char quote)
{
	printf(code, el, el, el, el, el, el, el, el, el, el, quote, code, quote, el, el, el, el, el, el);
}
/*
	Comme en Terre
*/
int		main()
{
	char *code = "#include <stdio.h>%cvoid	clone(char *code, char el, char quote)%c{%c	printf(code, el, el, el, el, el, el, el, el, el, el, quote, code, quote, el, el, el, el, el, el);%c}%c/*%c	Comme en Terre%c*/%cint		main()%c{%c	char *code = %c%s%c;%c	/*%c		3.14%c	*/%c	clone(code, 10, 34);%c}%c";
	/*
		3.14
	*/
	clone(code, 10, 34);
}
