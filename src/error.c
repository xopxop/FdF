#include "error.h"
#include "../libft/libft.h"

void set_error_message(const char *message) {
	ft_strcpy(g_error_message, message);
}

void print_error_message() {
	ft_putendl(g_error_message);
}

int print_error_and_exit(const char *message) {
	ft_putendl(message);
	return (1);
}
