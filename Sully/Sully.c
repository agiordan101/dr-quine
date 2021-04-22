# include <stdio.h>
# include <fcntl.h>
# define EOL 10
# define QUOTE 34
# define CODE "# include <stdio.h>%c# include <fcntl.h>%c# define EOL 10%c# define QUOTE 34%c# define CODE ""%c%cint		main()%c{%c	int		i = %d;%c	char	*clone_e; asprintf(&clone_e, \"Sully_%%d\", i);%c	char	*clone_c; asprintf(&clone_c, \"Sully_%%d.c\", i);%c	int	fd = open(clone_c, O_CREAT | O_TRUNC | O_RDWR, 0777);
	dprintf(CODE);
	char	*clone_exec; asprintf(&clone_exec, "gcc -Wall -Werror -Wextra %s -o %s", clone_c, clone_e);
	system(clone_exec);
	if (i > 0)
		execv(clone_e, NULL);
	return (0);
}
"

int		main()
{
	int		i = 5;
	char	*clone_e; asprintf(&clone_e, "Sully_%d", i);
	char	*clone_c; asprintf(&clone_c, "Sully_%d.c", i);
	int	fd = open(clone_c, O_CREAT | O_TRUNC | O_RDWR, 0777);
	dprintf(CODE);
	char	*clone_exec; asprintf(&clone_exec, "gcc -Wall -Werror -Wextra %s -o %s", clone_c, clone_e);
	system(clone_exec);
	if (i > 0)
		execv(clone_e, NULL);
	return (0);
}
