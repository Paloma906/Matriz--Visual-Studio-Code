#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Crie um algoritmo que receba: - o nome de tr�s bandas musicais; - e cinco integrantes para cada banda.
- Exemplo:
1� banda: ***
1� integrante: ***
2� integrante: ***
*/

int main()
{
    setlocale(LC_ALL, "");

    int i, j;
    char banda[3][250];
    char integrante[3][5][250];

    for (i = 0; i < 3; i++)
    {
        printf("Digite a banda:", i + 1);
        scanf("%s", banda[i]);

        for (j = 0; j < 5; j++)
        {
            printf("Digite o integrante:", j + 1);
            scanf("%s",& integrante[i][j]);
        }
    }

    system("cls");

    for (i = 0; i < 3; i++)
    {
        printf("%d� BANDA: %s\n", i + 1, banda[i]);

        for (j = 0; j < 5; j++)
        {
            printf("%d� INTEGRANTE: %s\n",j+1,integrante[i][j]);

        }

        printf("\n");
    }

    return 0;
}