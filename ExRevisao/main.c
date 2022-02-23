#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declaracao de variaveis
    char cp1, cp2;
    int qp1, qp2;
    float vp1, vp2;
    float vlrPagar;

    // inicializar variaveis
    cp1=' ';
    cp2=' ';
    cp1=cp2=0;

    // entrada de dados
    printf("Exercicios de revisao!\n");
    printf("Exercicios 1.1\n");

    scanf("%c", &cp1);
    scanf("%d", &qp1);
    scanf("%f", &vp1);

    scanf("%c", &cp2);
    scanf("%d", &qp2);
    scanf("%f", &vp2);

    //processamento
    vlrPagar = (qp1 * vp1) + (qp2 * vp2);

    // saida de dados
    printf("Valor a pagar: %7.2f\n\n", vlrPagar);

    return 0;
}
