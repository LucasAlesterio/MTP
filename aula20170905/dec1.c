#include <stdlib.h>
#include <stdio.h>
int a,b,c;
int main(){

	printf("digite um numero\n");
	scanf("%d",&a);
	if(a%2==0){
		printf("par ;");
	}
	else
	printf("impar ;");
	
	if(a%3==0){
		printf("mult.3 ;");
	}
	if(a%5==0){
		printf("mult.5 ;");
	}
	if(a%7==0){
		printf("mult.7 ;");
	}
	printf("\n");
	system("pause");
	return 0;
}

