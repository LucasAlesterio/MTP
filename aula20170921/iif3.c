#include <stdio.h>
int main ()
{
	int n, i;
	double f=1;
	printf("Digite um numero para se achar o fatorial\n");
    scanf("%d",&n);
	for (i=0;i<n;i++)
	f*=(n-i);
    printf("Resultado ");
    printf("%lf\n", f);
    return 0;
}
