#include <stdio.h>
void	_(char *code, char el, char quote, char backslash)
{
	printf(code, el, el, el, el, el, el, el, el, quote, code, quote, el, el, backslash, quote, backslash, backslash, el, el);
}
//Comme en Terre
int		main()
{
	char *code = "#include <stdio.h>%cvoid	_(char *code, char el, char quote, char backslash)%c{%c	printf(code, el, el, el, el, el, el, el, el, quote, code, quote, el, el, backslash, quote, backslash, backslash, el, el);%c}%c//Comme en Terre%cint		main()%c{%c	char *code = %c%s%c;%c	//3.14%c	_(code, '%cn', '%c', '%c%c');%c}%c";
	//3.14
	_(code, '\n', '"', '\\');
}
