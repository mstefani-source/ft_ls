#include "ft_ls.h"
#include "libft.h"

int	ft_what_is_that(char* key)
{
	if (*key == '-l')
		return(0);
	return(-1);
}

int ft_parsarg(int argc, char** string)
{
	int		key;

	while (*string) 
	{
		ft_putstr(*string);
		key = ft_what_is_that(*string);
		if (key == 0)
		{
			printf("found a good key\n");
		}
		ft_putstr(" ");
		string++;
	}
	
	return(argc - 1);
}