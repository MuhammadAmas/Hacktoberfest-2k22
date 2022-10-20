#include<stdio.h>
#include <unistd.h> 
#include <wait.h>
int main(){
	int n,i;
	for(i=0;i<3;i++){
		n = fork();
		printf("i=%d\n",i);
		if(n == 0){						// child process
			printf("Im child.Id is: %d\n",getpid());
		}
		else if(n > 0){						// parent process
			printf("Im parent.Id is: %d\n",getpid());
			wait(NULL);
		}
		else{							// error occured
			printf("Fork failed\n");
			return 1;	
		}
	}
}
