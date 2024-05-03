#include<stdio.h>
#include<unistd.h>

int main()
{
	pid_t pid;
	
	pid=fork();
	
	if(pid<0)
	{
		printf("fork failed");
		return -1;
	}
	if(pid==0)
	{
		printf("Child process id : %d\t ,priority : %d\n",getpid(),nice(-10));
	}
	else
	{
		printf("parent process id : %d\t,priority : %d\n",getpid(),nice(2));
	}
	
	return 0;
}
