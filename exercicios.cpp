

#include <iostream>

int main(){
    //exercicio 1
    char nome[20];
    int idade;

    printf("digite seu nome: ");
    std::cin.getline(nome, 20);
    printf("digite a dua idade ");
    scanf("%d", &idade );
    printf("olá seja bem vindo %s\n com %d\n anos", nome, idade);


    //exercicio 2
    
    // int num1, num2, soma ;
    // printf("digite um numero: ");
    // scanf("%d", &num1 );
    // printf("digite outro numero: ");
    // scanf("%d", &num2 );
    // soma = num1 + num2;
    // printf("Soma: %d \n", soma);

    //exercicio 3
    
    // int num1, resultado;
    // printf("digite um numero: ");
    // scanf("%d", &num1 );
    // printf("o dobro de %d é %d \n", num1, (num1 *2));


    return 0;

}
