#include "ft_ls.h"

int		ft_show_dir(char* pathdir)
{
	DIR*			dir;
	struct dirent*	entry;

	dir = opendir(pathdir);
	ft_printf("inode\t\t name\t type\t reclen\n");
    while ( (entry = readdir(dir)) != NULL) 
	{		
        ft_printf("%ld \t - \t %s \t [%d] \t %d\n", entry->d_ino, entry->d_name, entry->d_type, entry->d_reclen);
  		printf("%ld \t - \t %s \t [%d] \t %d\n", entry->d_ino, entry->d_name, entry->d_type, entry->d_reclen);
    }
    closedir(dir);
	pathdir++;
	ft_printf("%s\n", pathdir);
	return(0);
}