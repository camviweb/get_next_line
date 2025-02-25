/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canguyen <canguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 14:34:01 by canguyen          #+#    #+#             */
/*   Updated: 2025/02/03 15:34:21 by canguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# if BUFFER_SIZE > 8000000
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 8000000
# endif

char	*get_next_line(int fd);
int		has_newline(char *str);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strlen(char *s);
char	*get_before_newline(const char *s);
char	*get_after_newline(const char *s);
char	*ft_strdup(char *src);
void	ft_read(int fd, char **rest, char **tmp);
void	ft_free(char **str, char **str2, char **str3);

#endif
