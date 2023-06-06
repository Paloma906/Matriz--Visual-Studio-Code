#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um algoritmo que receba o nome de três disciplinas, receba três notas para  cada disciplina e mostre a média ponderada de cada disciplina:

- Exemplo:
Nome da disciplina: Lógica de programação 1ª nota: 8,0 peso 3
2� nota: 9,0 peso 3
3� nota: 7,0 peso 4
Media: 7,9
*/

int main()
{
    setlocale(LC_ALL, "");

    char disciplina[3][250];
    float nota[3][3];
    float media[3];
    int i, j;
    float soma = 0;
    float peso[3];
    //peso[3] = {3,3,4};

    peso[0] = 3;
    peso[1] = 3;
    peso[2] = 4;

    for (i = 0; i < 3; i++)
    {
        fflush(stdin);
        printf("Digite %d a disciplina: ", i + 1);
        gets(disciplina[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Digite a %d nota: ", j + 1);
            scanf("%f", &nota[i][j]);
            soma += nota[i][j] * peso[j];           
        }

        media[i] = soma / 10 ;
        soma = 0;
    }

    system("cls");

    for (i = 0; i < 3; i++)
    {
        printf("DISCIPLINA %d: %s\n", i + 1, disciplina[i]);

        for (j = 0; j < 3; j++)
        {
            printf("%d� NOTA: %2.f\n", j + 1, nota[i][j]);
        }

        printf("MEDIA: %.2f\n", media[i]);

        printf("\n");
    }

    return 0;
}