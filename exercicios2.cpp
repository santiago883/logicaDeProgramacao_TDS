#include <iostream>
#define RED     "\033[31m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

int main(){

    // int x = 5; 
    // if(x > 3 && x < 10){
    //     printf("afirmação 1 é verdadeira \n");
    // }else{
    //     printf("afirmação 1 é falsa");
    // }

    printf("afirmação 1 = %d \n",(5 > 3 && 5 < 10));

    // x = 7 ;
    // int y = 6 ;
    // if(x =  10 || y < 8){
    //     printf("afirmação 2 é verdadeira\n");
    // }else {
    //     ("afirmação 2 é falsa");
    // }

    printf("afirmação 2 = %d \n",(7 == 10 || 6 < 8));
    printf("afirmação 3 = %d \n",(15 + 20));
    printf("afirmação 4 = %d \n",(5 * 6));
    printf("afirmação 5 = %d \n",(20 / 4));
    printf("afirmação 2 = %d \n",( 8 + 9 != 17));


    //exercicio 2

    // float peso, altura;

    // printf("digite seu peso em quilogramas: ");
    // scanf("%f", &peso);
    // printf("digite a sua altura em metros: ");
    // scanf("%f", &altura);
    // printf("%f, %f", peso, altura); 
    // float resul = (peso / (altura * altura));


    // printf("Seu indice de masa corporal é: %f",(peso / (altura * altura)));

    //exercicio 3
    float tem, con;

    printf("digite uma temperatura em celsius");
    scanf("%f", &tem);
    printf("%f Fahrenheit", (tem = (tem * 9/5)+32));
    print()


    return 0;
}