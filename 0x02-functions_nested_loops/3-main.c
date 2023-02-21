#include "main.h"

int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('e');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
