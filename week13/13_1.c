#include <stdio.h>
#include <stdlib.h>

struct student{			//define student structure
	int ID;
	char Name[20];
	double Grade;
};

int main(int argc, char *argv[]) {
	struct student s1 = { 1, "SnowFlake", 4.3};		//declare variable in struct student type and initialize
	
	printf("Enter ID : ");		//receive information
	scanf("%i", &s1.ID);
	
	printf("Enter name :");
	scanf("%s", &s1.Name);
	
	printf("Enter Grade : ");
	scanf("%i", &s1.Grade);
	
	printf("ID : %i\nName : %s\nGrade : %i", s1.ID, s1.Name, s1.Grade);	//print information
	return 0;
}
