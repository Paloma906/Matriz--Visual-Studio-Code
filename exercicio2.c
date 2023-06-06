#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Crie um algoritmo que receba o trÃªs notas de 2 semestres e informe a mÃ©dia:
- 1 semestre:
- 1 nota: 7
- 2 nota: 9
- 3 nota: 8
- Media: 8,0
- 2 semestre:
- 1 nota: 8
- 2 nota: 7
- 3 nota: 3
- Media: 6,0
*/

int main()
{
    setlocale(LC_ALL, "");

    int i, j;
    int semestre[2];
    float nota[2][3];
    float media[2];
    float soma;

    for (i = 0; i < 2; i++)
    {
        printf("Digite o semestre:", i + 1);
        scanf("%d", &semestre[i]);

        for (j = 0; j < 3; j++)
        {

            printf("Digite a nota:", j + 1);
            scanf("%f", &nota[i][j]);
            soma += nota[i][j];
        }

        media[i] = soma / j;
        soma = 0;
        fflush(stdin);
    }

    system("cls");

    for (i = 0; i < 2; i++)
    {
        printf("%dº SEMESTRE:\n", i + 1, semestre[i]);

        for (j = 0; j < 3; j++)
        {
            printf("%dº NOTA: %.2f\n", j + 1, nota[i][j]);
        }

        printf("MEDIA: %.2f\n", media[i]);

        printf("\n");
    }

    return 0;
}