#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>
void safeFlush(){
	char c;
	while((c=getchar()) != EOF && c!= '\n');
}
int main(){
	int i;
	float x1,y1,x2,y2,resposta;
	safeFlush;
	printf("Digite o x1:\n ");
	scanf("%f",&x1);
	printf("Digite o y1:\n ");
	scanf("%f",&y1);
	printf("Digite o x2:\n ");
	scanf("%f",&x2);
	printf("Digite o y2:\n ");
	scanf("%f",&y2);
	resposta=sqrt((pow((x2-x1),2))+pow((y1-y2),2));
	printf("%f",resposta);
	return 0;
	
}
