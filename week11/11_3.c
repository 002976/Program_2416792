#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char src[] = "The worst things to eat before you sleep";
	char dst[100];
	
	dst[100] = strcpy(dst, src);
	
	printf("copied string : %s", dst);	
	return 0;
}
