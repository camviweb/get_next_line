#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*buf;
	int		r;
	static char    *rest = NULL;
	char *line;        // = NULL
	char *tmp;
	
	r = 1;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	while (r > 0)
	{
		r = read(fd, buf, BUFFER_SIZE);
		if (r == -1)
		{
			// free
			return (NULL);
		}
		buf[r] = '\0';
		tmp = rest;
		rest = ft_strjoin(rest, buf);
		free(tmp);
		if (has_newline(buf))
			break ; // espace ?
	}
	line = get_before_newline(rest);
	tmp = rest;
	rest = get_after_newline(tmp);
	free(tmp);
	return (line);
}

int	has_newline(char *str)
{
	int	i;

	// const char
	if (!str)
		return 0;
	i = 0;
	while (str[i])
	{
		if (str[i++] == '\n')
			return (1);
	}
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *s;
	int i;
	int j;

	i = 0;
	j = 0;
	if (!s1){
		return ft_strdup((char *)s2); // whyyy
	}
	s = malloc(sizeof(char) * (ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
	if (s == NULL)
		return NULL;
	while (s1[i]){
		s[i] = s1[i];
		i++;
	}
	while (s2[j]){
		s[i + j] = s2[j];
		j++;
	}
	s[i + j] = '\0';
	return s;
}

int	ft_strlen(char *s){
	int len;
	int i;

	len = 0;
	i = 0;
	while (s[i++]){
		len++;
	}
	return len;
}

char *get_before_newline(const char *s){
	char *rest;
	int i;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] && s[i] == '\n'){
		i++;
	}
	rest = malloc(sizeof(rest) * (i+1)); // ft_malloc_zero(i + 1, sizeof(rest))
	if (!rest)
		return NULL;
	i = 0;
	while (s[i] && s[i] != '\n'){
		rest[i] = s[i];
		i++;
	}
	if (s[i] == '\n'){
		rest[i] = s[i];
		i++;
	}
	rest[i] = '\0';
	return (rest);
}

char	*get_after_newline(const char *s){
	char *rest;
	int i;
	int j;

	j = 0;
	while (s[j]){
		j++;
	}
	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] && s[i] == '\n')
		i++;
	rest = malloc(sizeof(rest) * (j - i  + 1)); // ft_malloc_zero
	if (!rest)
		return NULL;
	j = 0;
	while (s[i + j]){
		rest[j] = s[i + j];
		j++;
	}
	return (rest);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		j;

	j = 0;
	dup = malloc(sizeof * dup * (ft_strlen(src) + 1));
	if (dup == NULL)
		return (NULL);
	while (src[j] != '\0')
	{
		dup[j] = src[j];
		j++;
	}
	dup[j] = '\0';
	return (dup);
}