#include <stdio.h>
#include <stdlib.h>
int main(){

    int n,num=0,nume=0,numeros[]{1,2},c=0,i;
    for (n=0;n<2;n++){
    printf("Ingrese dos numeros ");
    scanf("%d",&numeros[n]);
    if (num<numeros[n])
	{
       num=numeros[n];
	};
       if (c=0)
	   {
       	nume=numeros[n];
	   }
	   if(c=1)
	   {
	   	if (nume>numeros[n])
		   {
	   		nume=numeros[n];
		   }
	   }
       }
    i=nume;
    while (num>=i){
        printf("\n%d",i);
        i=i+1;
    }
}



