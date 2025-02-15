# Projet en cours 👩‍💻

Que ce soit un fichier, stdin, vous aurez besoin d'un moyen de lire le contenu ligne par ligne.  
https://web.archive.org/web/20220508112214/https://www.codequoi.com/en/42-get_next_line-project  
 Développer une fonction qui renvoie une ligne lue depuis un descripteur de fichier, sans perdre la prochaine ligne et avec une taille de buffer aléatoire.

### To do easely

- [ ] header 42

### To code

- [x] 1 variable statique
- [ ] NULL si rien d'autre à lire ou erreur
- [ ] retourner la ligne qui a été lue suivie du \n la terminant, sauf dans le cas où vous avez atteint la fin du fichier et que ce dernier ne se termine pas par un \n.
- [ ] buffer size = a size in bytes to read, in other words, the number of characters to read

### To test

- [ ] ne pas s'arrêter de façon inattendue (segmentation fault, bus error, double free) sauf comportements indéfinis
- [ ] Toute mémoire allouée sur la heap doit être libéré lorsque c’est nécessaire. Aucun leak ne sera toléré. -> valgrind
- [ ] guidelines correction
- [ ] francinette
- [ ] norminette

### To learn

- [ ] gcc, cc, clang
- [ ] norme header ? (espaces, include)
- [ ] NULL
- [ ] errno
- [ ] sizeof
- [ ] mémoire allouée dynamiquement/statiquement
