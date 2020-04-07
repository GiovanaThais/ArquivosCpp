#include<stdio.h>
#include<stdlib.h>
int i;
int uniao(int*x){
	
}
int diferenca(int*x,int *y){
	int diferenca=0;
	for(i=0;i<5;i++){
	diferenca=diferenca-x[i]-y[i];
} printf("a diferenca dos grupos eh %d\n",diferenca);
return diferenca;
}
int soma(int *x,int *y){
	int soma=0;
	for(i=0;i<5;i++){
	soma=soma+x[i]+y[i];
} printf("a soma dos grupos eh %d\n",soma);
return soma;
}
int prod(int *x,int *y){
	int prod=1;
	for(i=0;i<5;i++){
	prod=prod*x[i]*y[i];
} printf("o produto eh %d\n",prod);
return prod;
}
int intrc(int *x,int *y){
	int intrc;
	for(i=0;i<5;i++){
	for(i=0;i<5;i++){
	if(x[i]==y[i]){
		
	}	
}
}
printf("intercecao entre grupos x e y eh %d\n",intrc);
return intrc;
}


int main(void){
int i,*x,*y;
x=(int*)malloc(5*sizeof(int));
if(x==0){
	printf("error");
	exit(0);
}
y=(int*)malloc(5*sizeof(int));
if(y==0){
	printf("error");
	exit(0);
}
printf("digite numeros inteiros do grupo x");
for(i=0;i<5;i++){
	scanf("%d",&x[i]);
}
printf("digite numeros inteiros do grupo y");
for(i=0;i<5;i++){
	scanf("%d",&y[i]);
}

soma(x,y);
prod(x,y);
intrc(x,y);
diferenca(x,y);
free(x);
free(y);
return 0;
}

