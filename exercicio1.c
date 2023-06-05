#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*• Crie um algoritmo que receba o três notas de 2 semestres e mostre:
- 1º semestre:
- 1ª nota: 7
- 2ª nota: 9
- 3ª nota: 8
- 2º semestre:
- 1ª nota: 8
- 2ª nota: 7
- 3ª nota: 3
*/

int main()
{
    setlocale(LC_ALL, "");

    int semestre[2];
    int nota[2][3];
    int i, j;

    for (i = 0; i < 2; i++)
    {
        printf("Digite o semestre:", i + 1);
        scanf("%d",&semestre[i]);

        for (j = 0; j < 3; j++)
        {

            printf("Digite a nota: ", j + 1);
            scanf("%d",&nota[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        printf("semestre: %d \n", i + 1, semestre[i]);

        for (j = 0; j < 3; j++)
        {
            printf("%d� nota: %d \n", j+1,nota[i][j]);
        }
    }

    return 0;
}
