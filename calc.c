#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float n1, n2, result;
    char n3, confirmar;

    do {
        printf("digite o primeiro n�mero\n");
        scanf(" %f", &n1);

        printf("declare a opera��o(+, -, * , /)\n");
        scanf(" %c", &n3);

        while (n3 != '+' && n3 != '-' && n3 != '*' && n3 != '/') {
            printf("\n\nOpera��o inv�lida, digite um simbolo de opera��o\n");
            scanf(" %c", &n3);
        }

        if (n3 == '+') {
            printf("digite o segundo n�mero\n");
            scanf(" %f", &n2);
            result = n1 + n2;
            printf("\n\nO resultado da soma � %.2f", result);
        }

        if (n3 == '-') {
            printf("digite o segundo n�mero\n");
            scanf(" %f", &n2);
            result = n1 - n2;
            printf("\n\nO resultado da subtra��o � %.2f\n", result);
        }

        if (n3 == '*') {
            printf("digite o segundo n�mero\n");
            scanf(" %f", &n2);
            result = n1 * n2;
            printf("\n\nO resultado da multiplica��o � %.2f\n", result);
        }

        if (n3 == '/') {
            printf("digite o segundo n�mero\n");
            scanf(" %f", &n2);
            while (n2 == 0) {
                printf("\n\nN�mero inv�lido, digite outro \n");
                scanf(" %f", &n2);
            }

            result = n1 / n2;
            printf("\n\nO resultado da divis�o � %.2f\n", result);
        }

        printf("\n\ndeseja continuar (s/n)\n");
        scanf(" %c", &confirmar);

    } while (confirmar == 's');

    printf("\n\nPrograma encerrado\n");

    return 0;
}

