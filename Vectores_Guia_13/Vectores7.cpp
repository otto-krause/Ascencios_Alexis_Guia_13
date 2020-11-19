#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,notas[15],i=1;
    for (a=0;a<15;a++)
	{	
	printf("\n Ingrese la nota del alumno %d ",i);
	scanf("%d",&notas[a]);
	if(notas[a]>8)
	{
	printf("\n alumno %d tiene nota con mas de ocho ",i);
	}
	i++;	
}
return 0;
}



