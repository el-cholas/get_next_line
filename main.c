#include "get_next_line.h"

void	print(char *str)
{
	if (!s)
		return ;
	while (*str)
		write(fd, s++, 1);
}

int main(void)
{
	char	*fileName;
	int	fd;

	fileName = "bee_movie.txt";
	fd = open(file, O_RDONLY)
	printf(get_next_line(fd));
}
