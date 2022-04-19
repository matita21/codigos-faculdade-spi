#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float p1, p2, p3, trab;
	float media;
	int i = 0;
	for(i=0; i<10; i++) {
	
	printf("Insira as notas das avaliações do aluno:\n", i);
	printf("Prova 1:");
	scanf("%f",&p1);
	printf("Prova 2:");
	scanf("%f", &p2);
	printf("Prova 3:");
	scanf("%f",&p3);
	printf("Trabalho:");
	scanf("%f", &trab);
	media = ( p1 + (2 * p2) + (3 * p3) + (2 * trab)) / 8;
	printf("%.2f \n", media);
	}
	return 0;
}
	
