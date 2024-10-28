#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    int c;
    printf("Digite um número: ");
    scanf("%d", &c);
    return (0);
}