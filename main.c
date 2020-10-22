#include <stdio.h>
#define MAX 5
#include <time.h>

int main(int argc, char *argv[]) {
	int i,j,M[MAX][MAX];
	srand(time(0));
	for(i=0;i<MAX;i++){
		for(j=0;j<MAX;j++){
			M[i][j]=rand()%10;
		}
	}
	return 0;}
