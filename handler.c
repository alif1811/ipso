#include <signal.h>
#include <stdio.h>

void handle_HUP(int s){
	printf("Hang UP command with %d\n",s);
}

void handle_TERM(int s){
	printf("Received terminate signal!(%d)\n",s);
}

void handle_KILL(int s){
	printf("Received kill signal!(%d)\n",s);
}

int main(int argc, char **argv){
	char c;
	signal(SIGHUP,handle_HUP);
	signal(SIGTERM,handle_TERM);
	signal(SIGKILL,handle_KILL);
	printf("Press any ke to exit..!");
	c = getchar();
	return 0;
}
