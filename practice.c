#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <signal.h>
int main(){
  pid_t pid = fork();
  if (pid<0)
    fprintf(stdout,"Error while creating child\n");
  else if(pid==0)
    fprintf(stdout,"I am the kiddo, my pid is %d\n",pid);
  else
    fprintf(stdout,"I just created a kiddo with pid %d\nParent pid %d\n",pid,getpid());

  return 0;
}
