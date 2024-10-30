#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, n1, n2;
	printf ("Digite um numero: ");
	scanf("%d", &n);
	n1 = n + 1;
	n2 = n - 1;
	printf("O antecessor do numero %d é o numero %d \n", n, n2);
	printf("O sucessor do numero %d é o numero %d \n", n, n1);
    /*Todos os números naturais possuem antecessor, que é o número que antecede (anterior) um valor específico, e sucessor, que é o número que sucede (posterior) um valor específico. Sabendo disso, implemente um programa que solicita ao usuário a entrada de um número inteiro e apresenta seu antecessor e sucessor.*/
	return 0;
}