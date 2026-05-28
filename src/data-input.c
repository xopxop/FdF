// #include "stddef.h"

// typedef struct s_coordinate
// {
// 	int x;
// 	int y;
// 	int z;
// 	int color;
// }	t_coordinate;

// typedef struct s_grid
// {
// 	unsigned int max_x;
// 	unsigned int max_y;
// 	t_coordinate *matrix;
// }	t_grid;

// typedef struct s_map
// {
// 	t_grid *grid;
// 	// camera, etc
// } t_map;

// unsigned int get_max_y(char **lines)
// {
// 	unsigned int index = 0;
// 	while (lines[index] != 0) {
// 		index++;
// 	}
// 	return index;
// }

// unsigned int get_max_x(char *line)
// {
// 	unsigned int width = 0;
// 	// Count the number of elements in the first line (split by spaces)
// 	return width;
// }

// t_coordinate *get_matrix(char **lines, unsigned int height, unsigned int width)
// {
// 	t_coordinate *matrix = malloc(sizeof(t_coordinate) * height * width);
// 	if (!matrix) return 0;
// 	// Parse each line and fill the matrix with coordinates and colors
// 	return matrix;
// }

// t_coordinate *get_matrix(char **lines, unsigned int max_pos_x, unsigned int max_pos_y)
// {
// 	unsigned int y = 0;
// 	t_coordinate *matrix = malloc(sizeof(t_coordinate) * max_pos_x * max_pos_y);
// 	if (!matrix) return 0;
// 	while (max_pos_y - y) {
// 		int y = max_pos_y;
// 		char *line = lines[max_pos_y - y - 1];
// 		char **words = ft_split(line);
// 		unsigned int x = 0;
// 		while (max_pos_x - x - 1) {
// 			// get the coordinate and color from words[x] and fill the matrix
// 			x++;
// 		}
// 		ft_array_free(words)
// 		y++;
// 	}
// 	return matrix;
// }

// char error_message[256];

// int is_valid_input(char **lines)
// {
// 	if (!is_valid_height(lines)) {
// 		ft_strcpy(error_message, "Invalid height");
// 		return 0;
// 	}
// 	if (!is_valid_width(lines)) {
// 		ft_strcpy(error_message, "Invalid width");
// 		return 0;
// 	}
// 	if (!is_valid_characters(lines))
// 	{
// 		ft_strcpy(error_message, "Invalid characters in input");
// 		return 0;
// 	}
// 	return 1;
// }

// t_grid *get_grid(char **lines)
// {
// 	t_grid *grid = malloc(sizeof(t_grid));
// 	if (!grid) return 0;
// 	grid->max_y = get_max_y(lines);
// 	grid->max_x = get_max_x(lines[0]);
// 	grid->matrix = get_matrix(lines, grid->max_y, grid->max_x);
// 	if (grid->matrix == 0) {
// 		free_then_return_null(grid);
// 		return 0;
// 	}
// 	return grid;
// }

// t_map *get_map(char **lines)
// {
// 	t_map *map = malloc(sizeof(t_map));
// 	if (!map) return 0;
// 	map->grid = get_grid(lines);
// 	if (map->grid == 0) {
// 		free_then_return_null(map);
// 		return 0;
// 	}
// 	return map;
// }
