#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<dirent.h>
#include<fcntl.h>
#include<sys.h>

void separate_token(char*cmd,char*tok[])
{
	
}

int main()
{
	char cmd[80],*args[10];
	int pid;
	
	do
	{
		printf("\nMyShell$ : ");
		fgets(cmd,80,stdin);
		cmd[strlen(cmd)-1]='\0';
		separate_tokens(arg,cmd);
		
		if(strcmp(args[0],"list")==0)
		{
			list(args[2],args[1][0]);
		}
		else
		{
			pid=fork();
			if(pid>0)
				wait(0);
			else if(execvp(args[0],arg))
				printf("Command %s not found",args[0]);
		}
	}while(1);
	
	return 0;
}
