#include<stdio.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<stdlib.h>
#include<unistd.h>
void main()
{
	int pid,stat;
	pid = fork();
	if (pid == 0)
	{	int i;
		for(i=0;i<5;++i){
			printf("this is child process\n");
			sleep(1);}
	
	printf(" Child process completed \n");
	exit(1);
	}
	else
	{	
		int i;
		for(i=0;i<2;++i){
			printf("This is the parent process\n");
			sleep(1);}
		printf("parent process completed \n");
	}
	printf(" Waiting for the child to complete\n");
	wait(&stat);
	printf("the exit code extracted is :%d\n",WEXITSTATUS(stat));

}
