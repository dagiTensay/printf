#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);

/**
 * struct flag -flag object
 * @letter: flag char
 * @prnt: print function pointer
 * Descriptions: contains flag letter and corresponding print function
 **/
typedef struct flag
{
	char letter;
	int (*prnt)(va_list *);
} find_flag;
#endif /* MAIN_H */
