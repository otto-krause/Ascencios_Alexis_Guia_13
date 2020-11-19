#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m,mayor,me=1,vector[10],i=0,a;
    float promedio=0;
    printf(" ingrese 10 numeros \n");
    for(i=0;i<10;i++)
	{
    scanf("%d",&vector[m]);
	mayor=mayor+vector[m];
	me=me*vector[m];
	}
    for(i=0;i<10;i++)
	{
    if(vector[m]<promedio)
	{
	a++;
	}
	}
	promedio=mayor/10;
  printf(" %d estan por de bajo de el promedio, el promedio es %d , el producto es %d, la suma es %d",a,promedio,me,mayor);
return 0;
}




