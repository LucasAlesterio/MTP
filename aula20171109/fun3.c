#include <stdio.h>

int comparar(int n, int m, int * x, int * y){
	int i=0, j=0;
	for(i=0; i<n; i++){
		for(j=0; j<m ;j++){
			if(x[i]== y[j]){
			printf(" %d ", x[i]);
			 }
		}
	}
	return 0;
}

int main(){
	int x[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
	int n = sizeof(x)/sizeof(int);
	int y[] = {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
	int m = sizeof(y)/sizeof(int);
	comparar( n,m, x, y);
	return 0;
}
