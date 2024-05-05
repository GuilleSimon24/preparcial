#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    srand(time(NULL));

    puts("Produccion");
    int produ[5][12];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            produ[i][j] = 10000+rand()%40001;
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            printf("%d ",produ[i][j]);
        }
        printf("\n");
    }
    int promedio;
    int mayor=0;
    int mes;
    int anio;
    for (int i = 0; i < 5; i++)
    {
        promedio = 0;
        for (int j = 0; j < 12; j++)
        {
            promedio += produ[i][j];
            if (mayor < produ[i][j])
            {
                mayor = produ[i][j];
                anio = i+1;
                mes = j+1;
            }
            

        }
        printf("El promedio del anio %d es: %d\n", i+1, promedio);
        
    }
    printf("La mejor produccion fue de: %d, correspondiente al mes %d y al anio %d", mayor, mes, anio);
    
    


    return 0;
}