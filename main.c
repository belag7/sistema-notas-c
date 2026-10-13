#include <stdio.h>

int main() {
    int opcao;
    float nota1, nota2, nota3, media;

    do {
        // Exibe o menu principal
        printf("\n========================================\n");
        printf("    SISTEMA DE CALCULO DE MEDIAS v1.0   \n");
        printf("========================================\n");
        printf("1. Calcular media de um aluno\n");
        printf("2. Sair do programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\n--- Digite as 3 notas do aluno ---\n");
                printf("Nota 1: ");
                scanf("%f", &nota1);
                printf("Nota 2: ");
                scanf("%f", &nota2);
                printf("Nota 3: ");
                scanf("%f", &nota3);

                // Cálculo da média aritmética
                media = (nota1 + nota2 + nota3) / 3;

                printf("\n-> Media Final: %.2f\n", media);

                // Estrutura condicional para verificar situação
                if (media >= 7.0) {
                    printf("-> Status: APROVADO(A)! Parabens!\n");
                } else if (media >= 5.0) {
                    printf("-> Status: RECUPERACAO.\n");
                } else {
                    printf("-> Status: REPROVADO(A).\n");
                }
                break;

            case 2:
                printf("\nEncerrando o programa. Ate mais!\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }

    } while (opcao != 2); // O loop continua rodando enquanto a opção for diferente de 2

    return 0;
}
