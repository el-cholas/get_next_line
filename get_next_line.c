#include "get_next_line.h"

/*
 * 0 = False
 * 1 = True
 */

void	test()
{
	char	*buf;

	buf = (char *)malloc(sizeof(char) * 1);

	if (!buf)
		printf("False");
	else
		printf("True");
}

static char	*read_line(int fd)
{
	static int	i = 0;
	static char *buf;
	char		*str = NULL;

	//str = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	buf = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	//if (!buf)
	//buf = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	//*/
	if (!buf)
	{
		while (buf[i] != '\n' || buf[i])
			i++;

	}
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
	test();
	return (read_line(fd));
}
