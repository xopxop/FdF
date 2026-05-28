#include "error.h"
#include <fcntl.h>
#include <unistd.h>

int is_valid_input(char **lines)
{
	// if (!is_valid_height(lines)) {
	// 	set_error_message("Invalid height");
	// 	return 0;
	// }
	// if (!is_valid_width(lines)) {
	// 	set_error_message("Invalid width");
	// 	return 0;
	// }
	// if (!is_valid_characters(lines))
	// {
	// 	set_error_message("Invalid characters in input");	
	// 	return 0;
	// }
	return 1;
}

int is_valid_prompt(int ac, char **av)
{
	int fd;

	if (ac != 2) {
		set_error_message("Usage: ./fdf <filename>");
		return 0;
	}
	fd = open(av[1], O_RDONLY);
	if (fd < 0) {
		set_error_message("Error: Could not open file");
		return 0;
	}
	close(fd);
	return 1;
}
