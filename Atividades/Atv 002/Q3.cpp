#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int c, f;
	printf("Digite a temperatura em Celsius: ");
	scanf("%d", &c);
	f = (c*1.8) + 32;
	printf("A temperatura em Farenheit � %d", f);
	/*Crie um programa que solicita e l� uma temperatura em Celsius, 
	faz a convers�o para Fahrenheit e exibe tal resultado. Para isto, utilize a seguinte f�rmula: F = (F*1,8) + 32*/
	return 0;
}
