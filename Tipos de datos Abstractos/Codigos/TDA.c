#include "TDA.h"

void construirTDA(Salon* salonesRecibidos, Cafeteria* cafes, Escuela* universidad){
    int i;
    for(i=0; i<cantidadCafes;i++){
        universidad->cafeterias[i]=cafes[i];
        /*
        universidad->cafeterias[i].cantidadMesas=cafes[i].cantidadMesas;
        universidad->cafeterias[i].capacidadComensales=cafes[i].capacidadComensales;
        universidad->cafeterias[i].cantidadProductos=cafes[i].cantidadProductos;
        */
    }
    for(i=0; i<cantidadSalones;i++){
        universidad->salones[i]=salonesRecibidos[i];
    }
}

void destruirTDA(Escuela *escuela){
    free(escuela);
}

Escuela* asignarMemoria(){
    Escuela *escom=(Escuela *)malloc(sizeof(Escuela));
    if(escom==NULL){
        perror("Se acabo la memoria");
        exit(-1);
    }
    return escom;
}

void imprimirTDA(Escuela universidad){
    int i;
    for(i=0;i<cantidadSalones;i++){
        printf("Universidad salon[%d]-dimensiones: ancho=%1.3f, alto=%1.3f, largo=%f",i,universidad.salones[i].ancho,universidad.salones[i].alto,universidad.salones[i].largo);
        printf("Universidad salon[%d]-cantidad de mesas=%d",i,universidad.salones[i].cantidadMesas);
        printf("Universidad salon[%d]-cantidad de sillas=%d",i,universidad.salones[i].cantidadSillas);
    }

    for(i=0;i<cantidadCafes;i++){
        printf("Universidad cafe[%d]- cantidad de mesas =%d", i, universidad.cafeterias[i].cantidadMesas);
        printf("Universidad cafe[%d]- cantidad de comensales =%d", i, universidad.cafeterias[i].capacidadComensales);
        printf("Universidad cafe[%d]- cantidad de prodectos =%lld", i, universidad.cafeterias[i].cantidadProductos);
    }
}