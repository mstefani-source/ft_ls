#include "ft_ls.h"
#include "libft.h"

int	ft_option(char* key)
{
	char* option = "-";
	
	if (!ft_memcmp(key, option, 1))
		return(1);
	return(0);
}

int ft_parsarg(int argc, char** string)
{
	int		key;

	key = 0;
	if (argc < 2)
		return(key);
	while (*string) 
	{		
		key = ft_option(*string);
		if (key == 1)
			ft_putstr("found a option\n");
		if (key == 0)
			ft_show_dir(*string);
		if (key == -1)
			return(-1);
		string++;
	}	
	return(key);
}