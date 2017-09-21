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
	float a,b,c,ang;
	safeFlush;
	printf("Digite o valor dos dois lados:\n ");
	scanf("%f %f",&b,&c);
	printf("Digite o angulo:\n ");
	scanf("%f",&ang);
	a=sqrt((pow(b,2))+pow(c,2)-(2*b*c*cos(ang)));
	printf("%f",a);
	return 0;
	
}
