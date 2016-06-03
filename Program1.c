#include <stdio.h>
#include <time.h>
int random(int min, int max);
int main()
{
    while(1)
    {
        char output;
        int interval = random(0, 2);
        if(interval==0)
        {
            output = (char) random(48,57);
        }
        else if(interval==1)
        {
            output = (char) random(65,90);
        }
        else if(interval==2)
        {
            output = (char) random(97,122);
        }
        printf("%c", output);
    }

    return 0;
}

int random(int min, int max)
{
    int tmp;
    if (max>=min)
        max-= min;
    else
    {
        tmp= min - max;
        min= max;
        max= tmp;
    }
    return max ? (rand() % max + min) : min;
}
