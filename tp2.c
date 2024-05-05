#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct compu
{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
}typedef compu;



int main(){
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    compu arreglo[5];

    for (int i = 0; i < 5; i++)
    {
        arreglo[i].anio =2015+rand()%9;
        arreglo[i].velocidad = 1+rand()%3;
        arreglo[i].cantidad = 1+rand()%9;
        
        int aux=rand()%6;
        int longitud=strlen(tipos[aux]);
        arreglo[i].tipo_cpu=malloc(aux*sizeof(char));
        strcpy(arreglo[i].tipo_cpu, tipos[aux]);
        
    }

    for (int i = 0; i < 5; i++)
    {
        puts("------------");
        printf("\nTipo de CPU: ");
        puts(arreglo[i].tipo_cpu);
        printf("Anio: %d", arreglo[i].anio);
        printf("\nVelocidad: %d", arreglo[i].velocidad);
        printf("\nCantidad: %d\n", arreglo[i].cantidad);
    }

    int vieja=0;
    int index;
    int rapida=0;
    int indexRa;
    for (int i = 0; i < 5; i++)
    {
        if (vieja < arreglo[i].anio)
        {
            vieja = arreglo[i].anio; 
            index=i;           
        }
        if (rapida < arreglo[i].velocidad)
        {
            rapida = arreglo[i].velocidad;
            indexRa=i;
        }
        
        
    }
    printf("\n");
    puts("Pc mas vieja:");
    printf("\nTipo de CPU: ");
    puts(arreglo[index].tipo_cpu);
    printf("Anio: %d", arreglo[index].anio);
    printf("\nVelocidad: %d", arreglo[index].velocidad);
    printf("\nCantidad: %d", arreglo[index].velocidad);

    printf("\n\n");
    puts("Pc mas rapida:");
    printf("\nTipo de CPU: ");
    puts(arreglo[indexRa].tipo_cpu);
    printf("Anio: %d", arreglo[indexRa].anio);
    printf("\nVelocidad: %d", arreglo[indexRa].velocidad);
    printf("\nCantidad: %d", arreglo[indexRa].velocidad);
    
    

    return 0;
}
