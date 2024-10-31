#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int m;
	float p;
	printf("Quantas maçãs você deseja comprar? ");
	scanf("%d", &m);
	if(m<12){
		p = m*1.30;
		printf("O preço a ser pago por %d maças é R$%.2f", m, p);
	} else{
		p = m*1.10;
		printf("O preço a ser pago por %d maças é de R$%.2f", m, p);
	}
	return 0;
}
