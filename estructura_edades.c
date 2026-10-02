#include <stdio.h>

int main()
{
    float promedio[4];
    float suma = 0;
    int rae, cantidad, i, j;
    float nota, total;

    printf("CALCULADORA DE PROMEDIOS POR RAE\n");

    for (rae = 0; rae < 4; rae++)
    {
        total = 0;

        printf("\nRAE %d\n", rae + 1);

        do
        {
            printf("Cuantos datos son? ");
            scanf("%d", &cantidad);

            if (cantidad <= 0)
                printf("Numero invalido, intenta otra vez\n");

        } while (cantidad <= 0);

        for (j = 0; j < cantidad; j++)
        {
            printf("Dato %d: ", j + 1);
            scanf("%f", &nota);
            total += nota;
        }

        promedio[rae] = total / cantidad;
        suma += promedio[rae];
    }

    printf("\nRESULTADOS\n");

    for (i = 0; i < 4; i++)
    {
        printf("RAE %d: %.2f\n", i + 1, promedio[i]);
    }

    printf("Promedio final: %.2f\n", suma / 4);

    return 0;
}