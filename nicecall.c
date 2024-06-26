/*
2) Write a program that demonstrates the use of nice() system call. After a
child process is started using fork(), assign higher priority to the child using
nice() system call.*/


#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
pid_t pid;
pid = fork();
if (pid == 0)
{
printf("\nI am child process, id=%d\n",getpid());
printf("\nPriority :%d,id=%d\n",nice(-7),getpid());
}
else
{
printf("\nI am parent process, id=%d\n",getpid());
nice(1);
printf("\nPriority :%d,id=%d\n",nice (15),getpid());
}
return 0;
}
/*
Output
I am parent process, id=6555
Priority :6,id=6555
I am child process, id=6556
Priority :-17,id=6556*/
