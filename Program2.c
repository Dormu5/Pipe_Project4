#include <stdio.h>
int main()
{
    while(1)
    {
        char buf[16] = {0};
        fread( buf, 1, 15, stdin );
        printf("%s\n", buf);
    }

    return 0;
}
