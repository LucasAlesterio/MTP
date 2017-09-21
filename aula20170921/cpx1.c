#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <complex.h>
void safeFlush(){
	char c;
	while((c=getchar()) != EOF && c!= '\n');
}
int main(){
	int i;
	float n1,n2,b1,b2,c1,c2,r;
	safeFlush;
	printf("Digite o numero real 1:\n ");
	scanf("%f",&n1);
	printf("Digite o numero imaginario 1:\n ");
	scanf("%f",&c1);
	printf("Digite o numero real 2:\n ");
	scanf("%f",&n2);
	printf("Digite o numero imaginario 2:\n ");
	scanf("%f",&c2);
	b1=(n1+n2);
	b2=(c1+c2);
	printf("%f + %f i",b1,b2);
	return 0;
	
}
