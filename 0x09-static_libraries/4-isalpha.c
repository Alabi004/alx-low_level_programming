#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @c: input letrer
 * Return: always success
 */
int _isalpha(int c)
{

if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'z')))

return (1);

else

return (0);
}
