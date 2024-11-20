#include <stdio.h>
#include <stdlib.h>

char*proverb = "All that glitters is not gold.";

void setPointer(char **q){ 		//set double pointer (**q = *p)
	*q = proverb; 				//set pointer of q to be the same as proverb
}

int main(int argc, char *argv[]) {
	char *p = "zzz";
	setPointer(&p);
	printf("%s", p);			//print data of p which is **q = *proverb
	
	return 0;
}
