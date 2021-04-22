# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# define _GNU_SOURCE
# define EOL 10
# define QUOTE 34
# define CODE "# include <stdio.h>%c# include <fcntl.h>%c# include <stdlib.h>%c# include <unistd.h>%c# define _GNU_SOURCE%c# define EOL 10%c# define QUOTE 34%c# define CODE %c%s%c%c%cint		main()%c{%c	int		i = %d;%c	char	*clone_e; asprintf(&clone_e, %cSully_%%d%c, i);%c	char	*clone_c; asprintf(&clone_c, %cSully_%%d.c%c, i);%c	int	fd = open(clone_c, O_CREAT | O_TRUNC | O_RDWR, 0777);%c	dprintf(fd, CODE, EOL, EOL, EOL, EOL, EOL, EOL, EOL, QUOTE, CODE, QUOTE, EOL, EOL, EOL, EOL, i - 1, EOL, QUOTE, QUOTE, EOL, QUOTE, QUOTE, EOL, EOL, EOL, QUOTE, QUOTE, EOL, EOL, EOL, EOL, EOL, EOL);%c	char	*clone_exec; asprintf(&clone_exec, %cgcc -Wall -Werror -Wextra %%s -o %%s%c, clone_c, clone_e);%c	system(clone_exec);%c	if (i > 0)%c		execv(clone_e, (char *[2]){clone_e, NULL});%c	return (0);%c}%c"

int		main()
{
	int		i = 4;
	char	*clone_e; asprintf(&clone_e, "Sully_%d", i);
	char	*clone_c; asprintf(&clone_c, "Sully_%d.c", i);
	int	fd = open(clone_c, O_CREAT | O_TRUNC | O_RDWR, 0777);
	dprintf(fd, CODE, EOL, EOL, EOL, EOL, EOL, EOL, EOL, QUOTE, CODE, QUOTE, EOL, EOL, EOL, EOL, i - 1, EOL, QUOTE, QUOTE, EOL, QUOTE, QUOTE, EOL, EOL, EOL, QUOTE, QUOTE, EOL, EOL, EOL, EOL, EOL, EOL);
	char	*clone_exec; asprintf(&clone_exec, "gcc -Wall -Werror -Wextra %s -o %s", clone_c, clone_e);
	system(clone_exec);
	if (i > 0)
		execv(clone_e, (char *[2]){clone_e, NULL});
	return (0);
}
