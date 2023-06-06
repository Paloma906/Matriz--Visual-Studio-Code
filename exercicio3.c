#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Crie um algoritmo que receba o nome de trÃªs disciplinas, receba duas notas  para cada disciplina e mostre:
- Exemplo:
Nome da disciplina: LÃ³gica de programaÃ§Ã£o
- 1ª nota: 8,0
- 2ª nota: 7,0
- 3ª nota: 3,0
Média: 6,0
*/

int main()
{

    setlocale(LC_ALL, "");

    char disciplina[3][250];
    float nota[3][2];
    float media[3];
    int i, j;
    float soma;

    for (i = 0; i < 3; i++)
    {
        printf("Digite a disciplina: ", i + 1);
        scanf("%s", disciplina[i]);

        for (j = 0; j < 2; j++)
        {
            printf("Digite a nota: ", j + 1);
            scanf("%f", &nota[i][j]);
            soma += nota[i][j];
        }
        media[i] = soma / j;
        soma = 0;
        fflush(stdin);
    }

    system("cls");

    for (i = 0; i < 3; i++)
    {
        printf("%dº DISCIPLINA: %s\n", i + 1, disciplina[i]);

        for (j = 0; j < 2; j++)
        {
            printf("%dº NOTA: %.2f\n", j + 1, nota[i][j]);
        }

        printf("MEDIA: %.2f\n", media[i]);

        printf("\n");
    }

    return 0;
}