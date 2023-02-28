#ifndef MAIN_H
#define MAIN_H
/**
 * reset_to_98 - updates the value of the input to 98
 * @n: int
 *
 * Return: void
 */
void reset_to_98(int *n);

/**
 * swap_int - swaps the values of two integers
 * @a: int
 * @b: int
 *
 * Return: void
 */
void swap_int(int *a, int *b);

/**
 * _strlen -retuns the string length
 * @s: char
 *
 * Return: int
 */
int _strlen(char *s);

/**
 * _puts - prints a string
 * @str: char
 *
 * Return:void
 */
void _puts(char *str);

/**
 * _putchar - prints a character to stdou
 * @c: char
 *
 * Return: int
 */
int _putchar(char c);

/**
 * print_rev - prints a string in reverse
 * @s: char
 *
 * Return: void
 */
void print_rev(char *s);

void rev_string(char *s);

void puts2(char *str);

void puts_half(char *str);

void print_array(int *a, int n);

int _atoi(char *s);


char *_strcpy(char *dest, char *src);
#endif
