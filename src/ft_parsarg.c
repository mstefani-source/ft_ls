#include "ft_ls.h"
#include "libft.h"

int ft_parsarg(int argc, char** string)
{
	ft_putstr(*string);
	return(argc - 1);
}