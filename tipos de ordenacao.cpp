#include<stdio.h>
#include<stdlib.h>
int  ordenartroca(vet[],tam);
int ordselecao(vet[],tam);
int ordinsercao(vet[],tam);
int i,j;
int main(void){
 int *vet,tam,ordb,ords,ordin;
printf("digite a quantidade de numeros\n");
scanf("%d",&tam);
printf("digite a sequencia\n");
for(i=0;i<tam;i++){
	scanf("%d",&vet[i]);
}
for(i=0;i<tam;i++){
	printf("%d\n",vet[i]);
}
ordb=ordenartroca(vet,tam);
ords=ordselecao(vet,tam);
ordin=ordinsercao(vet,tam);
for(i=0;i<tam;i++)
printf("\t %d\n",ordb);

for(i=0;i<tam;i++){
	printf("\t %d\n",ords);
}
for(i=0;i<tam;i++){
	printf("\t %d\n",ordin);
}
return 0;
}
int ordenatroca(int vet[],int tam){
	int aux;
	for(i=0;i<tam;i++){
		for(j=0;j<tam-i-1;j++){
			if(vet[j]>vet[j+1]){
				aux=vet[j];
				vet[j]=vet[j+1];
				vet[j+1]=aux;
			}
		}
	}
	return aux;
}
int ordselecao(int vet[],int tam){
	int aux1,min;
	for(i=0;i<tam;i++){
		min=i;
		for(j=i+1;j<tam;j++){
			if(vet[i]<vet[min]){
				min=j;
			}
		}
		printf("%d\n",min);
		if(i!=min){
			aux1=vet[i];
			vet[i]=vet[min];
			vet[min]=aux1;
		}
	}
return aux1;
}
int ordinsercao(int vet[],int tam){
	int aux2;
	for(i=0;i<tam;i++){
		j=i;
		while(j!=0)&&(vet[j]>vet[j-1]){
		aux2=vet[j];
		vet[j]=vet[j-1];
		vet[j-1]=aux2;
		j--;
	} } 
	return aux2;
}
