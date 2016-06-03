#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    int pfds[2];

    pipe(pfds);

    if (!fork()) {
        close(1);       
        dup(pfds[1]);   
        close(pfds[0]); 
        execlp("./Program1", "Program1", NULL);
    } else {
        close(0);       
        dup(pfds[0]);   
        close(pfds[1]); 
        execlp("./Program2", "Program2", NULL);
    }

    return 0;
}


