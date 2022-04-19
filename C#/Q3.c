#include<stdio.h>
#include<locale.h>


void pi(){
	
	int num = 1;
		int N;
	printf("Insira N:\n");
	scanf("%d", &N);
		
		for(num=1; num<=N; num++) {
		
		if(num % 4 == 0){
			printf("pi ,", num);
		}else{
			printf("%d ,", num);
		}
	}
}


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	 
	pi();
	

	return 0;
}
