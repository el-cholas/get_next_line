#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/* for open() */
# include <fcntl.h>
/* for malloc and all that */
# include <stdlib.h>
/* for write() and read() */
#include <unistd.h>
/* REMOVE THIS BOI */
#include <stdio.h>

/* define the buffer */
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

/* get_next_line.c */
char	*get_next_line(int fd);

/* get_next_line_utils.c */
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dest_any, const void *src_any, size_t size);
#endif
