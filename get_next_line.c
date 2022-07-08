#include "get_next_line.h"

/*
 * 0 = False
 * 1 = True
 */
static char	*read_line(int fd)
{
	static int	i;
	static char *buf;
	char		*str;

	str = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);

	//if (!buf)
	//buf = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	//*/
	if (!i)
		i = 0;
	if (!buf || !str)
		return (NULL);
	read(fd, buf, BUFFER_SIZE);
	while (buf[i] != '\n' || buf[i])
		i++;
	return (str);
}

char	*get_next_line(int fd)
{
	//static	int line = 0;
	if (fd == -1 || BUFFER_SIZE < 1)
		return (NULL);
	return (read_line(fd));
}
