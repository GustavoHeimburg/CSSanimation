#include <stdio.h>

int main() {
    printf("Ola mundo\n");
    
    int num1, num2, soma;
    printf("Insira o primeiro numero: ");
    scanf("%d", &num1);
    printf("Insira o segundo numero: ");
    scanf("%d", &num2);
    soma = num1 + num2;
    printf("A soma dos numeros e: %d\n", soma);
    
    return 0;
}
