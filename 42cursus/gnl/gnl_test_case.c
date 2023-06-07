#include "get_next_line_bonus.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int		fd1, fd3, fd5, fd_null;
	char	*str;

	fd1 = open("1line.txt", O_RDONLY);
	fd3 = open("5line.txt", O_RDONLY);
	fd5 = open("5line.txt", O_RDONLY);
	fd_null = open("null.txt", O_RDONLY);

	printf("\n-----GET NEXT LINE TEST START-----\n\n");

	str = get_next_line(fd1);
	free(str);
	str = get_next_line(fd3);
	free(str);
	str = get_next_line(fd_null);
	str = get_next_line(fd5);

	printf("%s.", str);

	printf("\n\n-----GET NEXT LINE TEST END-----\n");

	free(str);
	return (0);
}
