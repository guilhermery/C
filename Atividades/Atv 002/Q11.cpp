#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, d;
	printf("Digite o numerador da divisão: ");
	scanf("%d", &n);
	printf("Digite o divisor: ");
	scanf("%d", &d);
	if(d==0){
		printf("A divisão é indefinida!");
	} else if((n%d==0)&&(d!=0)){
		printf("É divisível!");
	} else{
		printf("Não é divisível!");
	} 
	return 0;
}
