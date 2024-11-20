#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i = 100;
	int *p=&i;
	int **q=&p;
	//**q = *p = i
	*p = 200;
	printf("i = %d, *p = %d, **q = %d\n", i, *p,**q);
	
	**q = 300;
	printf("i = %d, *p = %d, **q = %d\n", i, *p,**q);
	
	return 0;
}
