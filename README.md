# Projet en cours 👩‍💻

Que ce soit un fichier, stdin, vous aurez besoin d'un moyen de lire le contenu ligne par ligne.  
 Développer une fonction qui renvoie une ligne lue depuis un descripteur de fichier, sans perdre la prochaine ligne et avec une taille de buffer aléatoire.
 
## Utilisation 
Exemple ``main.c``
```c
#include "get_next_line.h"
#include <fcntl.h> //open
#include <stdio.h> //printf

int	main(void)
{
	char *line;
	int fd;

	fd = open("file.txt", O_RDONLY);
	// /dev/random
	// /dev/tty
	// fd = 42;
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
}
```
Compilation:
```bash
cc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c main.c 
```
Execution:
```bash
./a.out
```
