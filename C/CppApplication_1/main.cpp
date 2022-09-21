#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <wait.h>

int main ( int argc, char *argv[] )
{
	int pid;
    pid_t ret;
    int status;
	pid = fork();
//P1
	if ( pid == 0 )
	{
		printf("je suis p2 pid=%d\n",getpid());
		
	}
	else    //P1
	{
    	pid = fork();
        if ( pid == 0 )//P3
    	{
				printf("je suis p3 pid=%d\n",getpid());
		
	    }
	    else    //P1
        {
            ret=wait(NULL);
            printf("un fils s'est terminé son pid etait : %d\n",ret);
    
        }

	}
	return EXIT_SUCCESS;
}
