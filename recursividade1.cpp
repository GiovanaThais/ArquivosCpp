#include<stdio.h>
#include<stdlib.h>
int mult(int,int);
int fat(int);
int pot(int,int);
int main(void){
int a,b,resp,x,u,n,y,r;
printf("digite dois numeros para serem multiplicados\n");
scanf("%d%d",&a,&b);
resp=mult(a,b);
printf("a multiplicacao de %d x %d eh = %d\n",a,b,resp);
printf("digite um numero para achar seu fatorial\n");
scanf("%d",&x);
u=fat(x);
printf("o fatorial de %d eh %d\n",x,u);
printf("digite um numero e o seu expoente\n");
scanf("%d%d",&y,&n);
r=pot(y,n);
printf("o numero %d elevado ao %d = %d\n",y,n,r);
return 0;
}
int mult(int a,int b){
	if(a==0)
	return 0;
	else
	return b+mult(a-1,b);
}
int fat(int x){
	if(x==0){
		return 1;
	}
	else
	return x*fat(x-1);
}
int pot(int y,int n){
	if(n==0){
		return 1;
	} else {
		return y*pot(y,n-1);
	}
}
