#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define clear() printf("\033[H\033[J")
int main()
{
	clear();
    int h=0,m=0,s=0;
	while(1){
		s++;
		if (s>59)
		{
			m++;
            s=0;
		}
		if (m>59)
		{
			h++;
            m=0;
		}
		printf("%02d:%02d:%02d",h,m,s);
        usleep(1000000);
        printf("\n");
        clear();
	}
    return 0;
}