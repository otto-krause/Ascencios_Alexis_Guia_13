#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c,numero[3],i=1,v;
    numero[a]=0;
    numero[b]=0;
    numero[c]=0;
    printf(" ingrese 3 numeros \n");
    scanf("%d",&numero[a]);
    scanf("%d",&numero[b]);
    scanf("%d",&numero[c]);
    v=numero[a]+numero[c];
    if(numero[a]<numero[b] and numero[a]<numero[c] and numero[b]<numero[c]){
    	printf("\n se ingresaron numeros ascendente");
	}else{
		if(numero[a]>numero[b] and numero[a]>numero[c] and numero[b]>numero[c]){
			printf("\n se ingresaron numeros descendente");
		}else{
		printf("\n se ingresaron numeros desordenadamente");	
		}			
	}
	printf("\n la suma del primero y el ultimo es %d",v);
return 0;	
}




