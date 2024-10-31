#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Digite um número: ");
	scanf("%d", &n);
	if(n>0){
		printf("O número %d é positivo!", n);
	} else if(n == 0){
		printf("O número %d é neutro!", n);
	} else{
		printf("O número %d é negativo!", n);
	}
	return 0;
}
