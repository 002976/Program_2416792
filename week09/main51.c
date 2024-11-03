#include <stdio.h>
#include <stdlib.h>
/*
statuc all_files
*/
int all_files;

extern void sub();

int main(void) {
	sub();
	printf("%d\n", all_files);
	return 0;
}
