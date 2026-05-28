#ifndef ERROR_H
# define ERROR_H

char g_error_message[256];

void set_error_message(const char *message);
void print_error_message();
int print_error_and_exit(const char *message);

#endif