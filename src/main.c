/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthan <dthan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/03 15:35:38 by dthan             #+#    #+#             */
/*   Updated: 2026/05/28 17:02:23 by dthan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "error.h"

// void run(t_map *map) {
	
// }

int main(int ac, char **av)
{
	if (ac != 2)
		return print_error_and_exit("Usage: ./fdf <filename>");
	
	// int fd = open(av[1], O_RDONLY);
	// if (fd < 0)
	// 	return print_error_and_exit("Error: Could not open file");
	// char **lines = get_lines(fd);
	// close(fd);
	// if (lines == 0)
	// 	return print_error_and_exit("Error: Could not read file");
	// if (!is_valid_input(lines))
	// 	return print_error_and_exit(g_error_message);
	// t_map *map = get_map(lines);
	// free_lines(lines);
	// if (map == 0)
	// 	return print_error_and_exit("Error: Could not create map");
	// run(map);
	// free_map(map);
	return (0);
}
