#include <stdio.h>

#include "calculadora.h"

int main() {
    char postfix[512] = "45 60 + 30 cos *"; 

    float resultado = getValor(postfix);

    char *infixa = getFormaInFixa(postfix);
    infixa = removeParenteses(infixa);

    printf("%s\n", infixa);
    printf("Resultado: %.2f\n", resultado);

    return 0;
}