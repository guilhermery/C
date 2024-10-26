#include<stdio.h>
#include<locale.h>
int main (){
    setlocale(LC_ALL, "Portuguese");
    int num1 = 5;
    float num2 = 2;
    float resultado = num1/num2;
    printf("O resultado é igual a %.2f", resultado);
    return (0);
}