#include <sys/types.h>
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    DIR *dp;
    dp = opendir(argv[1]);
    if(dp==NULL)
    {
        printf("Directory dosen't exist !\n");
        exit(1);
    }
    printf("\n");
    printf("Directory Opened !\n");

    struct dirent *ent;
    while((ent=readdir(dp)) != NULL)
    {
        printf("Inode : %lu\n",ent->d_ino);
        printf("FileName : %s\n",ent->d_name);
        printf("\n");
    }

    int ret = closedir(dp);
    if(dp==NULL)
    {
	printf("Directory dosen't exist !\n");
        exit(1);
    }

    printf("\n");
    printf("Directory Closed !\n");    

    return 0;
}
