#include <unistd.h>
extern char **environ;

int main(int argc, char **argv)
{
	int i;
	int pid;
	for(i=0;i<5;i++){
		pid = fork();
		if(pid == 0)
		execle("./mypid","./mypid",NULL,environ);
	}
	return 0;
}
