#include<stdio.h>
#include<stdlib.h>
#define tam 6
int main(void){
int i,j,aux,vet[6]={8,6,7,5,9,4},min;
for(i=0;i<6;i++){
	printf("%d",&vet[i]);
	printf("\n");
}
for(i=0;i<6;i++){
	min=i;
	for(j=i+1;j<6;j++){
		if(vet[j]<vet[min]){
			min=j;
		}
	}
}
printf("%d\n",min);
if(i!=min){
	aux=vet[i];
	vet[i]=vet[min];
	vet[min]=aux;
}
for(i=0;i<6;i++)
printf("%d",vet[i]);
printf("\n");


return 0;
}


