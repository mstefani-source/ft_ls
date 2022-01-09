#include "ft_ls.h"
#include <limits.h>

int main(int argc, char** argv)
{
	int				what_to_do;
	char*			f = "fffff";

	what_to_do = ft_parsarg(argc, ++argv);

	ft_printf("charbit = %d\n", CHAR_BIT);

	ft_printf("what = %d %s\n", what_to_do, f);
	return(0);
}
