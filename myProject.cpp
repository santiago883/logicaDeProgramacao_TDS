#include <iostream>

int validar_operador(char x){
    switch(x){
    case  '+':
       return 1;
        break;
    case '-':
        return 1;
        break;
    case '*' || 'x':
        return 1;
        break;
    case '/':
        return 1;
        break;
     default:
        return 2;
        break;
     }
}

int outroNumero(int num2){
    printf("digite outro numero \n");
    scanf("%d", &num2);
    return num2 = num2;
}

int main(){
    int num1, num2, v;
    char ope;

    // printf("digite um operador matematico '+ - * /':  \n ");
    // scanf("%c", &ope);

    printf("digite um numero: ");
    scanf("%d", &num1 );

    printf("digite um operador matematico '+ - * /':  \n ");
    scanf(" %c", &ope);
    
    
    v = validar_operador(ope);
    num2 = outroNumero(num2);

    
    if(v = 1){
        switch(ope){
    case  '+':
       num1 = num1 + num2;
       printf("resultado: %d \n", num1);

        break;
    case '-':
        num1 = num1 - num2;
        printf("resultado: %d \n", num1);
        break;
    case '*' || 'x':
        num1 = num1 * num2;
        break;
    case '/':
        num1 = num1 / num2;
        break;
     default:
        
        break;
     
    }

    }
    
    
    
    

    

    // //Realizando as operações matematicas
    // int soma = num1 + num2;
    // int subtracao = num1 - num2;
    // int multiplicacao = num1 * num2;
    // int divisao = num1 / num2;
    // int resto = num1 % num2; //Resto da divisão
    
    // //imprime os resultados
    // printf("Soma: %d + %d = %d\n", num1, num2, soma);
    // printf("Subtração: %d - %d = %d\n", num1, num2, subtracao);
    // printf("Multiplicação %d * %d = %d\n", num1, num2, multiplicacao);
    // printf("Divisão %d / %d = %d (quociente), Resto: %d\n", num1, num2, divisao, resto);

    // return 0;

}