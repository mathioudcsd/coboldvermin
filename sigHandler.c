#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void sig_handler(int signo){
	if(signo==SIGINT){
		fprintf(stdout,"got a  SIGINT\n");
	}
}

int main(void){

	if (signal(SIGINT, sig_handler)==SIG_ERR)
		fprintf(stderr,"\ncannot catch SIGINT\n");
	while(1){
		sleep(10);
	}
	return 0;
}