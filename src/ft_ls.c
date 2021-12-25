#include "libft.h"
#include "ft_ls.h"

int main(int argc, char** argv)
{
	int				num_of_args;
	time_t			seconds;

	num_of_args = ft_parsarg(argc, argv);
	ft_putstr("\n");


	time(&seconds);
	ft_putstr("\n");
	ft_putnbr(seconds);
	ft_putstr("\nnumber of args = ");
	ft_putnbr(num_of_args);
	ft_putstr("\n");
	return(0);
}
