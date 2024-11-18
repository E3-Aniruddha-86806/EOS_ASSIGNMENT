#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(int argc, char *argv[])
{

    int folder = mkdir(argv[1], 0777);
    if(folder==-1)
    {
        printf("Invalid Operation\n");
        exit(1);
    }
    
    printf("\n");
    printf("Folder Created\n");

    return 0;
}
