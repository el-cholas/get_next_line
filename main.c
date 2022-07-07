#include "get_next_line.h"

int main(void)
{
	char	*file;
	int		fd;

	file = "bee_movie.txt";
	fd = open(file, O_RDONLY);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	close(fd);
	return (0);
}
