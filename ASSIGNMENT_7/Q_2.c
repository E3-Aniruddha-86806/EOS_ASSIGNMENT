#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
	int i , pid1 , s1 , pid2 , s2 , pid3 , s3;

	pid1 = fork();
	if(pid1 == 0)
	{
		pid2 = fork();
		if(pid2 == 0)
		{
			pid3 = fork();
			if(pid3 == 0)
			{
				for(i = 1 ; i <= 5 ; i++)
				{
					printf("Child(D) : %d\n",i);
					sleep(1);
				}
				_exit(0);
			}
			else
			{
				for(i = 1 ; i <= 5 ; i++)
				{
					printf("Child(C) : %d\n",i);
					sleep(1);
				}
				waitpid(pid3, &s3, 0);
				printf("Child(C) Exit Status : %d\n",WEXITSTATUS(s3));
				_exit(0);
			}
		}
		else
		{
			for(i = 1 ; i <= 5 ; i++)
			{
				printf("Child(B) : %d\n",i);
				sleep(1);
			}
			waitpid(pid2 , &s2 , 0);
			printf("Child(B) Exit Status : %d\n",WEXITSTATUS(s2));
			_exit(0);
		}
	}
	else
	{
		for(i = 1 ; i <= 5 ; i++)
		{
			printf("Parent(A) : %d\n",i);
			sleep(1);
		}
		waitpid(pid1 , &s1 , 0);
		printf("Child(A) Exit Status : %d\n",WEXITSTATUS(s1));
	}

	return 0;
}
