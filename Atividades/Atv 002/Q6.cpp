#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	printf("Digite a sua idade: ");
	scanf("%d", &i);
	i = i*365;
	printf("Você viveu aproximadamente %d dias de vida", i);
	return 0;
}
