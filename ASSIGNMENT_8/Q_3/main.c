/*
Create a multi-ﬁle project (main.c, circle.c/.h, square.c/.h, rectangle.c/.h). Compile the program using "gcc" and execute it. No fork(), exec() expected
here.
*/

#include <stdio.h>
#include "circle.h"
#include "rectangle.h"
#include "square.h"
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main()
{
  int i=0,err,success=0,cnt=0,s;
  pid_t pid[7];
  
  pid[i++] = fork();
  if(pid[0] == 0)
  {
     err=execl("/usr/bin/gcc","gcc","-c","circle.c",NULL);
	 if(err == -1)
	 {
	   perror("exec() failed..!!!\n");
	   _exit(1);
	 }
  }

  pid[i++] = fork();
  if(pid[1] == 0)
  {
     err=execl("/usr/bin/gcc","gcc","-c","rectangle.c",NULL);
	 if(err == -1)
	 {
	   perror("exec() failed..!!!\n");
	   _exit(1);
	 }
  }

  pid[i++] = fork();
  if(pid[2] == 0)
  {
     err=execl("/usr/bin/gcc","gcc","-c","square.c",NULL);
	 if(err == -1)
	 {
	   perror("exec() failed..!!!\n");
	   _exit(1);
	 }
  }

  pid[i++] = fork();
  if(pid[3] == 0)
  {
     err=execl("/usr/bin/gcc","gcc","-c","func.c",NULL);
	 if(err == -1)
	 {
	   perror("exec() failed..!!!\n");
	   _exit(1);
	 }
  }

  while(waitpid(-1,&s,0) > 0)
  {
     cnt++;
     printf("Child_%d Exit Status: %d\n",cnt,WEXITSTATUS(s));
	 if(cnt == 4)
	   success=1;
  }
      
  if(success == 1)
  {
  	pid[i++] = fork();
    if(pid[4] == 0)
    {
     	err=execl("/usr/bin/gcc","gcc","-o","program.out","circle.o","square.o","rectangle.o","func.o",NULL);
		if(err == -1)
	 	{
	   		perror("exec() failed..!!!\n");
	   		_exit(1);
	 	}
  	}

	
  	pid[i++] = fork();
  	if(pid[5] == 0)
  	{
	    char *args[] = {"./program.out",NULL};
    	err=execvp("./program.out",args);
	 	if(err == -1)
	 	{
	   		perror("exec() failed..!!!\n");
	   		_exit(1);
        }
  	}
	else
	{
	   waitpid(pid[5],&s,0);
	   printf("Child_6 Exit Status: %d\n",WEXITSTATUS(s));
	}
   }  
   return 0;
}



















