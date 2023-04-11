#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates arguments of the program.
 * @ac: ptument count.
 * **@av: pointer to array
 * Return: Pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int a, b, c, volume;
	char *pt;

	volume = 0;
	c = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	a = 0;
	while (a < ac)
	{
		b = 0;
		while (av[a][b])
		{
			volume++;
			b++;
		}
		volume++;
		a++;
	}
	pt = malloc((sizeof(char) * volume) + 1);
	if (pt == NULL)
		return (NULL);
	a = 0;
	while (a < ac)
	{
		b = 0;
		while (av[a][b])
		{
			pt[c] = av[a][b];
			b++;
			c++;
		}
		pt[c] = '\n';
		c++;
		a++;
	}
	pt[c] = '\0';
	return (pt);
}
