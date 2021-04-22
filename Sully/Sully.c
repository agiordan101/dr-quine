# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# define _GNU_SOURCE
# define EOL 10
# define QUOTE 34
# define CODE "# include <stdio.h>%c# include <fcntl.h>%c# include <stdlib.h>%c# include <unistd.h>%c# define _GNU_SOURCE%c# define EOL 10%c# define QUOTE 34%c# define CODE %c%s%c%c%cint		main()%c{%c	int		i = %d;%c	char	*clone_e_f = %cSully_%%d%c;%c	char	*clone_c_f = %cSully_%%d.c%c;%c	char	*clone_exec_f = %cgcc -Wall -Werror -Wextra %%s -o %%s%c;%c	char	*clone_e = malloc(sizeof(char *) * 8); sprintf(clone_e, clone_e_f, i);%c	char	*clone_c = malloc(sizeof(char *) * 10); sprintf(clone_c, clone_c_f, i);%c	char	*clone_exec = malloc(sizeof(char *) * 36); sprintf(clone_exec, clone_exec_f, clone_c, clone_e);%c	dprintf(open(clone_c, O_CREAT | O_TRUNC | O_RDWR, 0777), CODE, EOL, EOL, EOL, EOL, EOL, EOL, EOL, QUOTE, CODE, QUOTE, EOL, EOL, EOL, EOL, i - 1, EOL, QUOTE, QUOTE, EOL, QUOTE, QUOTE, EOL, QUOTE, QUOTE, EOL, EOL, EOL, EOL, EOL, EOL, EOL, EOL, EOL, EOL);%c	system(clone_exec);%c	if (i > 0)%c		execv(clone_e, (char *[2]){clone_e, NULL});%c	return (0);%c}%c"

int		main()
{
	int		i = 5;
	char	*clone_e_f = "Sully_%d";
	char	*clone_c_f = "Sully_%d.c";
	char	*clone_exec_f = "gcc -Wall -Werror -Wextra %s -o %s";
	char	*clone_e = malloc(sizeof(char *) * 8); sprintf(clone_e, clone_e_f, i);
	char	*clone_c = malloc(sizeof(char *) * 10); sprintf(clone_c, clone_c_f, i);
	char	*clone_exec = malloc(sizeof(char *) * 36); sprintf(clone_exec, clone_exec_f, clone_c, clone_e);
	dprintf(open(clone_c, O_CREAT | O_TRUNC | O_RDWR, 0777), CODE, EOL, EOL, EOL, EOL, EOL, EOL, EOL, QUOTE, CODE, QUOTE, EOL, EOL, EOL, EOL, i - 1, EOL, QUOTE, QUOTE, EOL, QUOTE, QUOTE, EOL, QUOTE, QUOTE, EOL, EOL, EOL, EOL, EOL, EOL, EOL, EOL, EOL, EOL);
	system(clone_exec);
	if (i > 0)
		execv(clone_e, (char *[2]){clone_e, NULL});
	return (0);
}
