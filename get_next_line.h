#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/* for open() */
# include <fcntl.h>

/*
 * for write() - I will probably need to remove this
 * for moulinnete
 */
#include <unistd.h>

/* define the buffer */
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

/* get_next_line.c */
char	*get_next_line(int fd);
#endif
