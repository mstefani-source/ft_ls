#include <time.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdio.h>

/* 
struct dirent {
  ino_t          d_ino;       // inode number 
  off_t          d_off;       // offset to the next dirent 
  unsigned short d_reclen;    // length of this record 
  unsigned char  d_type;      // type of file; not supported
                              // by all file system types 
  char           d_name[256]; // filename 
};
*/

int			ft_parsarg(int argc, char** argv);
int			ft_show_dir(char* path_dir);
