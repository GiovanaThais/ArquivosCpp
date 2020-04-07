#include<stdio.h>
#include<stdlib.h>
#define tam 6
int main(void){
int i,j,aux,vet[6]={6,5,7,4,3,1};
for(i=0;i<6;i++){
	printf("%d",&vet[i]);
	printf("\n");
}
for(i=0;i<6;i++){
	for(j=0;j<6-i-1;j++){
		if(vet[j]>vet[j+1]){
			aux=vet[j];
			vet[j]=vet[j+1];
			vet[j+1]=aux;
		}
	}
}
for(i=0;i<6;i++)
printf("%d",vet[i]);
printf("\n");


return 0;
}

