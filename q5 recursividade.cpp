#include<stdio.h>
#include<stdlib.h>
int soma(int i,int j,int k);
int main(void){
int i,j,k,som;
printf("digite o intervalo (a,b)");
scanf("%d%d",&i,&j);
som=soma(i,j,k);
printf("soma eh %d\n",som);

return 0;
}
int aux;
int soma(int i,int j,int k){
	if(k>j)
	return aux;
	aux=aux+k;
	k++;
	soma(i,j,k);
}
