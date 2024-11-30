#include <stdio.h>
#include <stdlib.h>

#define STUDENTNUM 4

struct student{			//create structure
	int ID;
	int score;
};

int main(int argc, char *argv[]) {
	struct student s[STUDENTNUM];
	
	int i;								//save data in student structure
	for (i=0; i<STUDENTNUM ;i++){
		printf("Input ID : ");
		scanf("%d", &s[i].ID);
		printf("Input score : ");
		scanf("%d", &s[i].score);
	}
	
	float sum;							//find sum to calculate average
	for (i=0; i<STUDENTNUM ;i++){
		sum += s[i].score;
	}
	printf("The average of the score : %.3f\n", sum/STUDENTNUM);	//print average
	
	int high = 0, id;					//find the student with the highest score
	for (i=0; i<STUDENTNUM ;i++){
		if(s[i].score>high){
			high = s[i].score;
			id = s[i].ID;
		}
	}
	
	printf("The highest score - ID: %i, Score: %i", id,high);	//print information of highest score
	
	return 0;
}
