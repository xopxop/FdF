char **get_lines(int fd)
{
	char **lines = 0;
	char *line = 0;

	while (get_next_line(fd, &line))
	{
		if (line == 0)
		{
			free_lines(lines);
			return 0;
		}
		// add line to lines
	}
	return lines;
}