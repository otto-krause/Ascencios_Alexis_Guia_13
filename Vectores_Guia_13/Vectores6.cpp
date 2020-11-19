#include <stdio.h>
#include <stdlib.h>
int main()

{
    int a,mas=0,menos=0,sueldos[20],v;
    for (a=0;a<20;a++)
	{
	printf("Ingrese el sueldo ");
	scanf("%d",&sueldos[a]);
	if(sueldos[a]>2000)
	{
	mas=mas+1;
	}
	else{menos=menos+1; }
	}
printf("\n %d ganan mas de 2000 ",mas);
printf("\n %d ganan menos de 2000",menos);
return 0;
}

