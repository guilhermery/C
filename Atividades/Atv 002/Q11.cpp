#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, d;
	printf("Digite o numerador da divis�o: ");
	scanf("%d", &n);
	printf("Digite o divisor: ");
	scanf("%d", &d);
	if(n%d==0){
		printf("� divis�vel!");
	} else{
		printf("N�o � divis�vel!");
	}
	return 0;
}
