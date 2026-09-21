#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double limite;
    double temperatura;
    double soma = 0.0;
    double maior = 0.0;
    double menor = 0.0;

    int quantidade = 0;
    int acimaLimite = 0;
    int consecutivas = 0;

    printf("========================================\n");
    printf("     SISTEMA DE MONITORAMENTO\n");
    printf("========================================\n\n");

    /* Leitura e validacao do limite */
    do {
        printf("Digite o limite de temperatura: ");

        if (scanf("%lf", &limite) != 1 || !isfinite(limite)) {
            printf("Entrada invalida! Digite um numero valido.\n");

            while (getchar() != '\n');
            limite = NAN;
        }

    } while (!isfinite(limite));

    printf("\nMonitoramento iniciado!\n");
    printf("O programa sera encerrado apos 3 temperaturas consecutivas acima do limite.\n\n");

    /*
     * O laco continua enquanto ainda nao forem identificadas
     * tres temperaturas consecutivas acima do limite.
     */
    while (consecutivas < 3) {

        printf("Digite a temperatura: ");

        /* Validacao da temperatura */
        if (scanf("%lf", &temperatura) != 1 || !isfinite(temperatura)) {
            printf("Entrada invalida! Digite uma temperatura numerica.\n");

            while (getchar() != '\n');

            continue;
        }

        /* Primeira temperatura valida */
        if (quantidade == 0) {
            maior = temperatura;
            menor = temperatura;
        }

        /* Atualizacao do maior e menor valor */
        if (temperatura > maior) {
            maior = temperatura;
        }

        if (temperatura < menor) {
            menor = temperatura;
        }

        /* Soma e quantidade de temperaturas validas */
        soma += temperatura;
        quantidade++;

        /* Verificacao da temperatura em relacao ao limite */
        if (temperatura > limite) {
            acimaLimite++;
            consecutivas++;

            printf("Temperatura ACIMA do limite!\n");
            printf("Sequencia acima do limite: %d\n", consecutivas);
        } else {
            consecutivas = 0;

            printf("Temperatura dentro do limite.\n");
            printf("Sequencia acima do limite reiniciada.\n");
        }

        printf("\n");
    }

    /* Relatorio final */
    printf("\n========================================\n");
    printf("          MONITORAMENTO ENCERRADO\n");
    printf("========================================\n");

    printf("Motivo: foram registradas 3 temperaturas consecutivas acima do limite.\n\n");

    printf("Limite definido: %.2f\n", limite);
    printf("Quantidade de temperaturas: %d\n", quantidade);
    printf("Maior temperatura: %.2f\n", maior);
    printf("Menor temperatura: %.2f\n", menor);
    printf("Media das temperaturas: %.2f\n", soma / quantidade);

    printf("Quantidade acima do limite: %d\n", acimaLimite);

    printf("Percentual acima do limite: %.2f%%\n",
           ((double)acimaLimite / quantidade) * 100.0);

    printf("\n========================================\n");

    return 0;
}