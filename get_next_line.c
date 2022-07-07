#include "get_next_line.h"

static char	*read_line(int line)
{
	char *str;
	char *buffer;
	int 	nl_count;

	nl_count = 0;
	str = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	buffer = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	read(fd, buffer, BUFFER_SIZE);
	return (str);
}
char	*get_next_line(int fd)
{
	static	int line = 0;
	if (fd == -1 || BUFFER_SIZE < 1)
		return (NULL);
	line++;
}
