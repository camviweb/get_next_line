#include "get_next_line.h"
#include <fcntl.h> //open
#include <stdio.h> //printf

int	main(void)
{
	char *line;
	int fd;

	fd = open("get_next_line.h", O_RDONLY);
	if (fd == -1)
	{
		perror("Erreur d'ouverture");
		return (1);
	}
	while ((line = get_next_line(fd))){
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);

	/*char *line;

	while ((line = get_next_line(0))){
		printf("%s", line);
		free(line);
	}
	return (0);*/
}
