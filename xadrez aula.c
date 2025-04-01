#include<stdio.h>

int main(){

        int opcao, numero, i, j;
        

        printf("### Escolha uma peça ###\n");
        printf("1. Torre\n");
        printf("2. Rainha\n");
        printf("3. Bispo\n");
        printf("4. Cavalo\n");
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

            case 4:

            printf("Número de casas para baixo: "); // 2 casas 
            scanf("%d", &numero);

            printf("Número de casas para a esquerda: "); // 1 casa
            scanf("%d", &numero);

                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        printf("Baixo \n");
                    }
                    
                } printf("Esquerda \n");
    
                break;
        
        default:

            printf("Opção inválida!\n");
            break;
        }

       


    return 0;
}