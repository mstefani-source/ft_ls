#include "ft_ls.h"

int main(int argc, char** argv)
{
	int				what_to_do;

	what_to_do = ft_parsarg(argc, ++argv);

	ft_printf("what_to_do = %d \n", what_to_do);
	return(0);
}
