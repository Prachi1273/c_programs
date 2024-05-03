/*1.) Implement the C Program to create a child process using fork(), display parent and
child process id. Child process will display the message “I am Child Process” and the
parent process should display “I am Parent Process”.*/
#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
// fork() Create a child process
int pid = fork();
if (pid < 0) {
printf("I am Parent process\n");
printf("ID : %d\n\n", getpid());
}
else if (pid == 0) {
printf("I am Child process\n");
// getpid() will return process id of child process
printf("ID: %d\n", getpid());
}
else {
printf("Failed to create child process");
}
return 0;
}/*
@kali-linux:~/Desktop/Ty$ ./a.out
I am Parent process
ID : 3698
I am Child process
ID: 3699*/





