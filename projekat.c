#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <semaphore.h>
#include <sys/mman.h>
#include <sys/wait.h>



int main(){

int pipe1[2], pipe2[2];

pipe(pipe1);
if(pipe(pipe1)==-1){
	perror("Pipe1 ne radi.");
	exit(1);
}

pipe(pipe2);
if(pipe(pipe2)==-1){
	perror("Pipe 2 ne radi.");
	exit(1);
}

return 0;
}
