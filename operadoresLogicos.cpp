#include <iostream>

int main() {
    int a, b ;

    //Solicita ao usuário para digitar dois numeros
    printf("Digite o primeiro número (0 ou 1): ");
    scanf("%d", &a);
    printf("Digite o segundo número (0 ou 1): ");
    scanf("%d", &b);

    // Operador AND
    printf("\nOperador AND (&&):\n");
    printf("%d && %d = %d\n", a, b, a && b);
    
    // Operador OR
    printf("\nOperador OR (||):\n");
    printf("%d || %d = %d\n", a, b, a || b);

    // Operador NOT 
    printf("\nOperador NOT (!):\n");
    printf("!%d = %d\n", a, !a);
    printf("!%d = %d\n", b, !b);

    return 0;





}