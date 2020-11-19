#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,promgen,alumnos[30];
    int i=1;
    for (a=0;a<30;a++)
	{	
	printf("Ingrese las notas del %d alumno ", i);
	scanf("%d",&alumnos[a]);
	i++;
	promgen=promgen+alumnos[a];
	}
	promgen=promgen/30;
	printf("\n El promedio es %d",promgen);
return 0;
}

