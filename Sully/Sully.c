# include <stdio.h>
# include <unistd.h>
# define EOL 10
# define QUOTE 34
# define CODE ""
// # define CODE "# include <stdio.h>%c# include <unistd.h>%c# define EOL 10%c# define QUOTE 34%c# define CODE %c%s%c%c%cint		main()%c{%c	int		i = %d;%c	char	*self = %cSully.c%c;%c	char	*clone_o = %cSully_%d%c;%c	char	*clone_c = %cSully_%d.c%c;%c	int		fd = fopen(clone_c, %cw%c);%c%c	fprintf(fd, CODE, EOL, QUOTE, CODE, QUOTE, EOL, EOL, EOL, EOL, EOL, EOL, EOL, EOL, QUOTE, QUOTE, EOL, EOL, EOL, EOL, EOL, EOL);%cclose((int)fd);%c	char	*clone_exec = %cclang -Wall -Werror -Wextra %%s -o %%s && ./%%s%c; sprintf(clone_exec, clone_c, clone_o, clone_o);%c	execv(clone_c, (char *[2]){clone_exec, NULL});%c	return (0);%c}%c/"

int		main()
{
	int		i = 5;
	if (i < 1)
		return (0);

	char	*self_c = "Sully.c";
	char	*clone_o = "Sully_%d"; sprintf(clone_o, i - 1);
	char	*clone_c = "Sully_%d.c"; sprintf(clone_c, i - 1);

	FILE	*fd = fopen(clone_c, "w");
	fprintf(fd, CODE, EOL, EOL, EOL, EOL, QUOTE, CODE, QUOTE, EOL, EOL, EOL, EOL, i - 1, EOL, QUOTE, QUOTE, EOL, QUOTE, QUOTE, EOL, QUOTE, QUOTE, EOL, QUOTE, QUOTE, EOL, EOL, EOL, EOL, QUOTE, QUOTE, EOL, EOL, EOL, EOL);
	close((int)fd);

	char	*clone_exec = "clang -Wall -Werror -Wextra %s -o %s && ./%s"; sprintf(clone_exec, clone_c, clone_o, clone_o);
	execv(clone_c, (char *[2]){clone_exec, NULL});
	return (0);
}
