#include <stdio.h>
#include <string.h>
typedef struct{
    int id;
    char nombre[20];
    char tipo;
    float efectividad;
} eVacuna;

float aplicarAumento(float precio);
int reemplazarCaracteres(char cadena[], char caracterUno, char caracterDos);
void ordenarArray(eVacuna lista[], int tam);

int main()
{
    eVacuna vacunas[3];
    
    float precio = 100;
    
    precio =  aplicarAumento(precio);
    
    ordenarArray(vacunas, 3);
   
    printf("%f", precio);

    return 0;
}

//1.
float aplicarAumento(float precio)
{
    float resultado;
    
    resultado = (float)((100 + 5) * (precio)) / 100; 
    
    return resultado;
    
}

//2.
int reemplazarCaracteres(char cadena[], char caracterUno, char caracterDos)
{
    int cantidad = 0;
    int largo = strlen (cadena);
    
    for(int i = 0; i < largo; i++)
    {
        if(cadena[i] == caracterUno)
        {
            cadena[i] = caracterDos;
            cantidad++;
        }
    }
    
    return cantidad;
}

//3.
void ordenarArray(eVacuna lista[], int tam)
{
    eVacuna listaAux;
    
    if(lista != 0 && tam > 0)
    {
        for(int i = 0; i < tam - 1; i++)
        {
            for(int j = i + 1; j < tam; j++)
            {
                if(lista[i].tipo > lista[j].tipo)
                {
                    listaAux = lista[i];
                    lista[i] = lista[j];
                    lista[j] = listaAux;
                }
            }
        }
    }
}
