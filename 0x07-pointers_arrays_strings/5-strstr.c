#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to be located
 *
 * Return: pointer to the beginning of substring
 */
char *_strstr(char *haystack, char *needle)
{

	char *ptr_h = haystack;
	char *ptr_n = needle;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*ptr_h != '\0')
	{
		if (*ptr_h == *ptr_n)
		{
			char *temp_h = ptr_h;
			char *temp_n = ptr_n;

			while (*temp_h == *temp_n && *temp_n != '\0')
			{
				temp_h++;
				temp_n++;
			}
			if (*temp_n == '\0')
			{
				return (ptr_h);
			}
		}
		ptr_h++;
	}
	return ('\0');
}
