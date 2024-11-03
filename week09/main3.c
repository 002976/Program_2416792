#include <stdio.h>
#include <stdlib.h>
void f(void);

int i;
int main(int argc, char *argv[]) {
	for(i=0;i<5;i++)
	{
		f();						//after the for-statement in completed once, i=10
	}								
	return 0;
}

void f(void)
{
	for (i=0;i<10;i++)
	printf("#");
}
