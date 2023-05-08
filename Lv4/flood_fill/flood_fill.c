#include "flood_fill.h"

void flood_fill(char **tab, t_point size, t_point begin)
{
	int	i;
	int	j;
	char c;

	i = 0;
	j = 0;
	c = tab[begin.y][begin.x];
	while(tab[i] && i != size.y)
	{
		while(tab[i][j] != '\0')
		{
			if (tab[i][j] == c)
				tab[i][j] = 'F';
			j++;
		}
		j = 0;
		i++;
	}
}

