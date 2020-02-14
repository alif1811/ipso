#include <signal.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

void handle_HUP(int s){
	printf("Hang UP command with %d\n",s);
}

void handle_TERM(int s){
	printf("Received terminate signal!(%d)\n",s);
}

void handle_KILL(int s){
	printf("Received kill signal!(%d)\n",s);
}

void handle_ALRM(int s){
	time_t tloc;
	struct tm mytm;
	time(&tloc);
	localtime_r(&tloc,&mytm);
	printf("%d-%02d-%02d %02d:%02d:%02d\n",
			mytm.tm_year+1900,mytm.tm_mon+1,mytm.tm_mday,
			mytm.tm_hour,mytm.tm_min,mytm.tm_sec);
	alarm(1);
}

int main(int argc, char **argv){
	char c;
	struct tm mytm;
	time_t t;
	signal(SIGHUP,handle_HUP);
	signal(SIGTERM,handle_TERM);
	signal(SIGKILL,handle_KILL);
	signal(SIGALRM,handle_ALRM);
	printf("Press any ke to exit..!");
	alarm(1);
	c = getchar();
	return 0;
}
