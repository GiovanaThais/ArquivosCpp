#include<stdio.h>
#include<stdlib.h>
#define lin 3
#define col 2
void preenchemat(float matnotas[lin][col]);
void imprimemat(float matnotas[lin][col]);;
float traco(float matnotas[][col]);
float medianotas(float [][col]);

int main(void){
float notas[lin][col],media;

preenchemat(notas);
imprimemat(notas);
printf("o traco da matriz eh %ff\n",traco(notas));
media=medianotas(notas);
printf("a media da matriz eh %f\n",media);

return 0;
}
void preenchemat(float matnotas[][col]){
	int i,j;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			printf("digite as notas da posicao[%d][%d]\n",i,j);
			scanf("%f",&matnotas[i][j]);
		}
	}
	
}
void imprimemat(float matnotas[][col]){
	int i,j;
		for(i=0;i<lin;i++){
			for(j=0;j<col;j++){
				printf("\n %f   ",matnotas[i][j]);
			}
		}

	printf("\n");
}
float traco(float matnotas[][col]){
	int cont;
	float traco=0;
	for(cont=0;cont<lin;cont++){
		traco+=matnotas[cont][cont];
	}
	
	return traco;
}
float medianotas(float matnotas[][col]){
	int i,j;
	float soma=0,media;
		for(i=0;i<lin;i++){
			for(j=0;j<col;j++){
				soma+=matnotas[i][j];
			}
		}

	media=soma/(lin*col);
	return media;
}
