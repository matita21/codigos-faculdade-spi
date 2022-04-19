#include<stdio.h>
#include<locale.h>

void tictac(){
		int num;
	
	printf("Insira um número qualquer:\n");
	scanf("%d", &num);
	
	if(num%2 == 0 && num%3 == 0 && num%5 == 0){
		printf("TicTac");
	}else if (num%2 == 0 && num%3 == 0){
		printf("Tic");
	}else if(num%5 == 0){
		printf("Tac");	
	}else{
		printf("%d", num);
	}
}
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	tictac();

	return 0;
}
