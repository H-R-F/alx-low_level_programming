#include "main.h"
/** 
* print_sign - prints sign of a number
* @n: function parameter 
* Return: 1, 0 or -1
*/

int prin_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
        {
		_putchar(48);
		return (0);
	} 
	else
	{
		_putchar('-');
		return (-1);
        }
}
