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
	float r,i;
	double complex z, rf;
	safeFlush;
	printf("Digite o numesro real 1:\n ");
	scanf("%f",&r);
	printf("Digite o numero imaginario 1:\n ");
	scanf("%f",&i);
	z=r+i*I;
	rf=(conj(z)*z);
	printf("%lf + %lf*I",creal(rf),cimag(rf));
	return 0;
	
}
