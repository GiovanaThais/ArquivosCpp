#include<stdio.h>
#include<stdlib.h>
int maiornum(int[],int);
int menornum(int [],int);
int somapares(int [],int);
int prodimpar(int [],int);
void media(int [],int,float*);

int main(void){
	int num[6]={4,5,6,7,9,8};
	int tam=6,ma,me,soma,prod;
	float med;

ma=maiornum(num,tam);
me=menornum(num,tam);
soma=somapares(num,tam);
media(num ,tam, &media);
prod=prodimpar(num,tam);

printf("o maior numero eh %d\n o menor eh %d\n a soma dos pares eh %d\n o produto dos impares eh %d\n a media eh %f\n",ma,me,soma,prod,med);

return 0;
}
int maiornum(int num[],int tam){
	int maior=num[0],i;
	for(i=1;i<tam;i++){
		if(maior<num[i]){
			maior=num[i];
		}
	}
	return maior;
}
int menornum(int num[],int tam){
	int menor=num[0],i;
	for(i=1;i<tam;i++){
		if(menor>num[i]){
			menor=num[i];
		}
	}
	return menor;
}
int somapares(int num[],int tam){
	int somas=0,i;
	for(i=0;i<tam;i++){
		if(num[i]%2==0){
			somas+=num[i];
		}
	}
	
	return somas;
}
int prodimpar(int num[],int tam){
	int prod=1,i;
	for(i=0;i<tam;i++){
		if(num[i]%2!=0){
			prod*=num[i];
		}
	}
	
	return prod;
}
void media(int num[],int tam,float *med){
	int i,som=0;
	float media;
	for(i=0;i<tam;i++){
		som+=num[i];
		*med=(float)som/tam;
	}
	
}
