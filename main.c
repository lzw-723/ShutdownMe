#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//void sleep(long time);
void shutdown();

int main(void)
{
	printf("How long time later shutdown the computer?\n");
	int time = 0;
	printf("Please enter the waiting time(seconds):");
    while(scanf("%d", &time) != 1)
    {
        printf("Please enter correct time value:");
        fflush(stdin);
    }
	while(time-- > 0)
		{
			printf("%d second(s) later shutdown\n");
			sleep(1);
		}
    shutdown();
	return 0;
}

void shutdown()
{
	system("shutdown -s -t 0");
}