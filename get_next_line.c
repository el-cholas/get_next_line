#include "get_next_line.h"

/*
 * 0 = False
 * 1 = True
 */

/*
void	test()
{
	char	*buf;

	buf = (char *)malloc(sizeof(char) * 1);

	if (!buf)
		printf("False");
	else
		printf("True");
}
*/
/*
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
/*
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
*/

/*
 * read_boy() reads the file descriptor until it finds a new line
 */

char	*read_boy(int fd, char *line)
{
	char	*buf;

	buf = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	if (read(fd, line, BUFFER_SIZE) == -1)
	{
		free(buf);
		return (NULL);
	}
	if (!ft_strchr(buf), '\n')
		return (read_boy(fd, ft_strjoin(buf, line)));
	return (ft_strjoin(buf, line))
}

char	*get_next_line(int fd)
{
	char	*line;
	//static	int line = 0;
	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	line = read_boy(fd, line);
	if (!line)
		return (NULL);
	return (line);
}
