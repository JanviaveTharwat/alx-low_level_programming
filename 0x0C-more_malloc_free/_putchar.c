#include <unistd.h>

/**
*_putchar -write characters 
* @c : printed character
*Return : 1
*/

int _putchar(char c)
{
  return (write(1, &c, 1));
}
