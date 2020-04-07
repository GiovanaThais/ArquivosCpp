#include<stdio.h>
#include<stdlib.h>
void preenchemat(int col, float matnotas[][col]);
void imprimenotas(int col,float matnotas[][col]);
float traco(int col, float [][col]);
float medianotas(int col, float [][col]);


int main(void){
 int lin,col;
 printf("digite a linha\n");
 scanf("%d",&lin);
 col=lin;
 float notas[lin][col],media;
   preenchemat(col,notas);
   imprimenotas(col,notas);
 printf("\n o traco da matriz eh %f\n",traco(col,notas));
   media=medianotas(col,notas);
 printf("\n a media eh %f\n\n",media);

return 0;
}
void preenchemat(int col,float matnotas[][col]){
	int i,j,lin=col;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			printf("informe a nota da posicao [%d][%d]\n",i,j);	
			scanf("%f",&matnotas[i][j]);
		}
	}

		
}
void imprimenotas(int col,float matnotas[][col]){

	int i,j,lin=col;
	printf("/n");
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			printf("%.1f   ",matnotas[i][j]);
			printf("\n");
		}
	}
	
	
}
float traco(int col,float matnotas[][col]){
	int cont,lin=col;
	float traco=0;
	for(cont=0;cont<lin;cont++){
			traco+=matnotas[cont][cont];
		
	}	
	return traco;
}
float medianotas(int col,float matnotas[][col]){
	int i,j,lin=col;
	float soma=0;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			soma+=matnotas[i][j];;
		}
	}
	return soma/(lin*col);
}
