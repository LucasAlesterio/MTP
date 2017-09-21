#include <stdlib.h>
#include <stdio.h>
float a,b,c,d,e,m;
int main(){
do{
	printf("digite as 5 notas \n");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	}while(a<0||a>10||b<0||b>10||c<0||c>10||d<0||d>10||e<0||e>10);
	m=((2*a)+(2*b)+(2*c)+(3*d)+(5*e))/14;
	printf("%f\n",m);
	

return 0;
}

