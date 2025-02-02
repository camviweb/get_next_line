# Projet en cours 👩‍💻
Que ce soit un fichier, stdin, vous aurez besoin d'un moyen de lire le contenu ligne par ligne.  
https://web.archive.org/web/20220508112214/https://www.codequoi.com/en/42-get_next_line-project  
 Développer une fonction qui renvoie une ligne lue depuis un descripteur de fichier, sans perdre la prochaine ligne et avec une taille de buffer aléatoire.  

### To do
- [ ] variable statique
- [ ] formateur pour la norme
- [ ] installer norminette
- [ ] segmentation fault
- [ ] bus error
- [ ] double free
- [ ] comportements indéfinis
- [ ] guidelines correction
- [ ] Toute mémoire allouée sur la heap doit être libéré lorsque c’est nécessaire. Aucun leak ne sera toléré.
- [ ] Makefile (ne doit pas relink) -> flags (-Wall -Wextra -Werror)
- [ ] gcc, cc, clang
- [ ] règles $(NAME) ?
- [ ] header
- [ ] Si le projet autorise votre libft, vous devez copier ses sources et son Makefile associé dans un dossier libft contenu à la racine. Le Makefile de votre projet doit compiler la librairie à l’aide de son Makefile, puis compiler le projet.
- [ ] programmes de test -> enlever pour norme ?
- [ ] syntaxe header
- [ ] comment reçoit fd // libft -> cmt tester fichier/entrée standard 
- [ ] cas simples
- [ ] NULL si rien d'autre à lire ou erreur
- [ ] malloc
- [ ] free
- [ ] read
- [ ] Des appels successifs à votre fonction doivent vous permettre de lire l’intégralité du fichier texte référencé par le descripteur de fichier, une ligne à la fois.
- [ ] Vous devez toujours retourner la ligne qui a été lue suivie du \n la terminant, sauf dans le cas où vous avez atteint la fin du fichier et que ce dernier ne se termine pas par un \n.
