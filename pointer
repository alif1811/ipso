#include <sys/types.h>
#include <wait.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int fpid,retval,wstat;
	
	printf("My PID : %d\n",getpid());
	printf("My parent PID : %d\n",getppid());
	printf("forking...");
	fpid = fork();
	if(fpid == 0){
		printf("child:  pid %d\n",getpid());
		printf("child: ppid %d\n",getppid());
	} else {
		printf("parent: child pid = %d\n",fpid);
		retval = wait(&wstat);
	}
	return 0;
}
