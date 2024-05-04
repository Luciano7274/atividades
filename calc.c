#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float n1, n2, result;
    char n3, confirmar;

    do {
        printf("digite o primeiro número\n");
        scanf(" %f", &n1);

        printf("declare a operação(+, -, * , /)\n");
        scanf(" %c", &n3);

        while (n3 != '+' && n3 != '-' && n3 != '*' && n3 != '/') {
            printf("\n\nOperação inválida, digite um simbolo de operação\n");
            scanf(" %c", &n3);
        }

        if (n3 == '+') {
            printf("digite o segundo número\n");
            scanf(" %f", &n2);
            result = n1 + n2;
            printf("\n\nO resultado da soma é %.2f", result);
        }

        if (n3 == '-') {
            printf("digite o segundo número\n");
            scanf(" %f", &n2);
            result = n1 - n2;
            printf("\n\nO resultado da subtração é %.2f\n", result);
        }

        if (n3 == '*') {
            printf("digite o segundo número\n");
            scanf(" %f", &n2);
            result = n1 * n2;
            printf("\n\nO resultado da multiplicação é %.2f\n", result);
        }

        if (n3 == '/') {
            printf("digite o segundo número\n");
            scanf(" %f", &n2);
            while (n2 == 0) {
                printf("\n\nNúmero inválido, digite outro \n");
                scanf(" %f", &n2);
            }

            result = n1 / n2;
            printf("\n\nO resultado da divisão é %.2f\n", result);
        }

        printf("\n\ndeseja continuar (s/n)\n");
        scanf(" %c", &confirmar);

    } while (confirmar == 's');

    printf("\n\nPrograma encerrado\n");

    return 0;
}

