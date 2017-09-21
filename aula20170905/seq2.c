#include <stdlib.h>
#include <stdio.h>
float a,b,c,d,e,M;
int main(){

	printf("digite as 5 notas \n");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	if(a>=0&&a<=10&&b>=0&&b<=10&&c>=0&&c<=10&&d>=0&&d<=10&&e>=0&&e<=10){
	M=((2*a)+(2*b)+(2*c)+(3*d)+(5*e))/14;
	printf("%f\n",M);
}
else 
printf("Nota invalida");
	return 0;
}

