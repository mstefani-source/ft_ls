#include "ft_ls.h"
#include <limits.h>

int main(int argc, char** argv)
{
	int				what_to_do;

	what_to_do = ft_parsarg(argc, ++argv);

	ft_printf("charbit= %d\n", CHAR_BIT);

	ft_printf("what= %d %d\n", what_to_do, what_to_do);
	return(0);
}
