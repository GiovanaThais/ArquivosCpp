#include<stdio.h>
#include<stdlib.h>
#define N 7
void preenchevet(int *);
void imprimevet(int *);
void somavet(int *);
float mediavet(int *);

int main(void){
int num[N];
float media;
preenchevet(num);
imprimevet(num);
somavet(num);

media=mediavet(num);
printf("a media eh %f\n",media);

return 0;
}
void preenchevet(int vet[]){
	int i;
	printf("digite %d numeros\n",N);
	for(i=0;i<N;i++){	
		scanf("%d\n",&vet[i]);
	}
}
void imprimevet(int *vet){
	int i;
	for(i=0;i<N;i++){
		printf("\t%d     \t\t%d\n",i,vet[i]);
	}
	printf("\n");
}
void somavet(int *vet){
	int i,som=0;
	for(i=0;i<N;i++){
		som+=vet[i];
	}
	printf("a soma eh %d\n",som);
}
float mediavet(int *vet){
	int i,som=0;
	for(i=0;i<N;i++){
		som+=vet[i];
	}
	
	return (float)som/N;
}
