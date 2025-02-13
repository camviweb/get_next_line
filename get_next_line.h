#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stddef.h> // size_t
# include <stdlib.h> //malloc, free
# include <unistd.h> //read

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
int	has_newline(char *str);
char	*ft_strjoin(char const *s1, char const *s2);
int	ft_strlen(char *s);
char *get_before_newline(const char *s);
char	*get_after_newline(const char *s);
char	*ft_strdup(char *src);

#endif