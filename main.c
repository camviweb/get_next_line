#include "get_next_line.h"
#include <fcntl.h> //open
#include <stdio.h> //printf

int	main(void)
{
	char *line;
	int fd;

	fd = open("file.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("Erreur d'ouverture");
		return (1);
	}

	/*while ((line = get_next_line(fd)))
	{
		printf("%s", line);
		free(line);
	}*/
line = get_next_line(fd);
printf("%s", line);
free(line);

	/*char buffer[BUF_SIZE];
	int bytesRead;
	int fd;

	fd = open("file.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("Erreur lors de l'ouverture du fichier");
		return (1);
	}
	// get_next_line(fd);
	bytesRead = read(fd, buffer, BUF_SIZE);
	if (bytesRead == -1)
	{
		perror("Erreur lors de la lecture du fichier");
		close(fd);
		return (1);
	}

	buffer[bytesRead] = '\0';
	printf("%s", buffer);*/
	close(fd);
	return (0);
}