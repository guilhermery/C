#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int m;
	float p;
	printf("Quantas ma��s voc� deseja comprar? ");
	scanf("%d", &m);
	if(m<12){
		p = m*1.30;
		printf("O pre�o a ser pago por %d ma�as � R$%.2f", m, p);
	} else{
		p = m*1.10;
		printf("O pre�o a ser pago por %d ma�as � de R$%.2f", m, p);
	}
	return 0;
}
