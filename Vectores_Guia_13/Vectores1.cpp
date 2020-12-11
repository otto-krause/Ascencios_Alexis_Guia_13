#include <stdio.h>
#include <stdlib.h>
int main()//Falta función.
{
int a,rttotal=0,resistencia[5]{0};//No es necesario asignar valor a cada posición.
for (a=0;a<5;a++)
{
printf("Ingrese las resistencias ");
scanf("%d",&resistencia[a]);
}
for (a=0;a<5;a++)
{
printf("\n Las resistencias son %d",resistencia[a]);
rttotal=rttotal+resistencia[a];
}
printf("\n La resistencia total es %d",rttotal);
return 0;
}
 

