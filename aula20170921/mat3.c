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
	float n,b,c;
	safeFlush;
	printf("Digite o numero:\n ");
	scanf("%f",&n);
	printf("Digite a base:\n ");
	scanf("%f",&b);
	c=(log(n)/log(b));
	printf("%f",c);
	return 0;
	
}
