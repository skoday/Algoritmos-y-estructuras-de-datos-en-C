#include "TDA.h"

void main(int argc, char** argv){
    Escuela *uni=asignarMemoria();
    Salon arraySalones[cantidadSalones];
    Cafeteria arrayCafes[cantidadCafes];
    int opc=0;
    int contadorSalones=0;
    int contadorCafes=0;
    do{
        puts("0.- Guarda información en estructura");
        puts("1.- Ingresar un salon");
        puts("2.- Ingresar una cafeteria");
        puts("3.- Imprimir todo el contenido");
        puts("4.- Salir del programa");
        fflush(stdin);
        scanf("%d",&opc);
        switch(opc){
            case 0:
                construirTDA(&arraySalones[0],arrayCafes,uni);
                construirTDA(arraySalones,arrayCafes,uni);
                break;
            case 1:
                if(contadorSalones<cantidadSalones){
                    puts("Ingresa el alto del salon:");
                    fflush(stdin);
                    scanf("%f",&arraySalones[contadorSalones].alto);

                    puts("Ingresa el ancho del salon:");
                    fflush(stdin);
                    scanf("%f",&arraySalones[contadorSalones].ancho);

                    puts("Ingresa el largo del salon:");
                    fflush(stdin);
                    scanf("%f",&arraySalones[contadorSalones].largo);
                    
                    puts("Ingresa la cantidad de sillas del salon:");
                    fflush(stdin);
                    scanf("%d",&arraySalones[contadorSalones].cantidadSillas);

                    puts("Ingresa la cantidad de mesas del salon:");
                    fflush(stdin);
                    scanf("%d",&arraySalones[contadorSalones].cantidadMesas);
                    contadorSalones++;
                } else
                    puts("Lo siento se termino la capacidad para salones");
                break;
            case 2:
                if(contadorCafes<cantidadCafes){
                    puts("Ingresa la capacidad de comensales de la cafeteria:");
                    fflush(stdin);
                    scanf("%d",&arrayCafes[contadorCafes].capacidadComensales);
                    
                    puts("Ingresa la cantidad de productos de la cafeteria:");
                    fflush(stdin);
                    scanf("%d",&arrayCafes[contadorCafes].cantidadProductos);

                    puts("Ingresa la cantidad de mesas de la cafeteria:");
                    fflush(stdin);
                    scanf("%d",&arrayCafes[contadorCafes].cantidadMesas);
                    contadorCafes++;
                } else
                    puts("Lo siento se termino la capacidad para cafeterias");
                break; 
            case 3:
                imprimirTDA(*uni);
                break;
            case 4:
                destruirTDA(uni);
                break;
            default:
                puts("Opcion invalida");
        }
    }while(opc!=4);
}