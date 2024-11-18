#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{

    int folder = rmdir(argv[1]);
    if(folder==-1)
    {
        printf("Invalid Operation\n");
        exit(1);
    }
    
    printf("\n");
    printf("Folder Deleted\n");

    return 0;
}
