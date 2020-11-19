#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,uni,total,vendedores[20],vendedor;
    int i=1;
    for (a=0;a<20;a++)
	{
	printf("Ingrese el total de unidades vendidas en 15 dias ");
	scanf("%d",&vendedores[a]);
	i++;
	}
	for (a=0;a<20;a++)
	{
	if (i=1)
	{
    uni=vendedores[a]/15;
    vendedor=i;
	}
	}
	for (a=0;a<20;a++)
	{
	if ((vendedores[a]/15)>uni)
	{
    uni=vendedores[a]/15;
    vendedor=i;
	}
	total=total+vendedores[a];
	}


printf("\n El total es %d",total);
printf("\n La mayor venta diaria es %d por el vendedor %d",uni,vendedor);
return 0;
}

