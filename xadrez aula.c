#include<stdio.h>

int main(){

        int opcao, numero, i = 0;
        

        printf("### Escolha uma peça ###\n");
        printf("1. Torre\n");
        printf("2. Rainha\n");
        printf("3. Bispo\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:

            printf("Número de casas para a direita: "); // 5
            scanf("%d", &numero);

            for (i = 0; i < 5; i++)
            {
                printf("Direita\n");
            }

            break;

        case 2:

        printf("Número de casas para a esquerda: "); // 8
            scanf("%d", &numero);

            for (i = 0; i < 8; i++)
            {
                printf("Esquerda\n");
            }

            break;
        case 3:

        printf("Número de casas para cima e para a direita: "); // 5 casas na diagonal
            scanf("%d", &numero);

            for (i = 0; i < 5; i++)
            {
                printf("Para cima e para direita\n");
            }

            break;
        
        
        default:

            printf("Opção inválida!\n");
            break;
        }


    return 0;
}