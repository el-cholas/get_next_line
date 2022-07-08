#include "get_next_line.h"

int main(void)
{
	char	*file;
	int		fd;

	file = "bee_movie.txt";
	fd = open(file, O_RDONLY);
	printf("line 1: %s\n", get_next_line(fd));
	printf("line 2: %s\n", get_next_line(fd));
	//get_next_line(fd);
	//get_next_line(fd);
	close(fd);
	return (0);
}
