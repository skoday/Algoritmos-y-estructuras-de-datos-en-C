#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#define cantidadCafes 2
#define cantidadSalones 10


//Nivel 2
typedef struct{
    float ancho;
    float alto;
    float largo;
    int cantidadSillas;
    int cantidadMesas;
}Salon;

//Nivel 2
typedef struct{
    int cantidadMesas;
    int capacidadComensales;
    long long int cantidadProductos;
}Cafeteria;

//Nivel 3
typedef struct{
    Salon salones[cantidadSalones];
    Cafeteria cafeterias[cantidadCafes];
} Escuela; 

void construirTDA(Salon* salonesRecibidos, Cafeteria* cafes, Escuela* universidad);

void destruirTDA(Escuela* escuela);

Escuela* asignarMemoria();

void imprimirTDA(Escuela universidad);

