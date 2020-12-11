#include <stdio.h>
#include <stdlib.h>
//Falta función
int main()
{
	
	int a,numprom=0,numero[5],nummay;
	for (a=0;a<5;a++)
	{
	printf("Ingrese los numeros ");
	scanf("%d",&numero[a]);
	if (nummay<numero[a])
	{
	nummay=numero[a];
	}//;?
	}
	for (a=0;a<5;a++)
	{
	numprom=numprom+numero[a];
	}
	numprom=numprom/5 ;
	printf("\n El promedio es %d",numprom);
	printf("\n El numero mas grande es %d",nummay);
return 0;
}
