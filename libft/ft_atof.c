#include "libft.h"

double			ft_atof(const char *nptr)
{
	int			i;
	double		nr;
	double		s;
	int			z;
	int			k;

	i = 0;
	nr = 0;
	z = 1;
	nr = ft_atoi(&nptr[i]);
	k = (nptr[i] == '-') ? -1 : 1;
	nr = nr * k;
	while ((nptr[i] >= '0' && nptr[i] <= '9') || (nptr[i] == '-'))
		i++;
	(nptr[i] == '.') ? i++ : 0;
	while ((nptr[i] >= '0') && (nptr[i] <= '9'))
	{
		z = z * 10;
		s = nptr[i++] - '0';
		nr = s / z + nr;
	}
	return (k * nr);
}
