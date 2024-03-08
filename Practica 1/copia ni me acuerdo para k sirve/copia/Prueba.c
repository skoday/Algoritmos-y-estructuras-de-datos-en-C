#include "Libreria.h"

int main(){

    escuela *escom = asignarmemoria();
    salon saloneses[cantidadSalones];
    biblioteca bibliotecon;
    int opcion = 0, csalones = 0, cbiblioteca = 0;

    do
    {
        puts("LA ESCUELA");
        puts("1. Anadir salon");
        puts("2. Anadir biblioteca");
        puts("3. Guardas informacion en estructura");
        puts("4. Imprimir informacion");
        puts("5. Salir");
        fflush(stdin);
        scanf("%d",&opcion);

        switch (opcion)
        {
        case 1:
            if(csalones < cantidadSalones){
                puts("Ingresa el ancho del salon:");
                fflush(stdin);
                scanf("%f",&saloneses[csalones].ancho);
                puts("Ingresa el alto del salon:");
                fflush(stdin);
                scanf("%f",&saloneses[csalones].alto);
                puts("Ingresa messas del salon:");
                fflush(stdin);
                scanf("%d",&saloneses[csalones].mesas);
                puts("Ingresa sillas del salon:");
                fflush(stdin);
                scanf("%d",&saloneses[csalones].sillas);
                csalones++;
            }
            else
                puts("Murio el espacio");
            break;
        
        case 2:
            if(cbiblioteca == 0){
                puts("Ingresa anaqueles");
                fflush(stdin);
                scanf("%d",&bibliotecon.anaqueles);
                puts("Ingresa sillas");
                fflush(stdin);
                scanf("%d",&bibliotecon.sillas);
                puts("Ingresa computadoras");
                fflush(stdin);
                scanf("%d",&bibliotecon.computadora);
            }

            else
                puts("Ya no hay espacio papi");
            break;

        case 3:
            construirTDA(&saloneses[0],&bibliotecon, escom);
            break;

        case 4:
            imprimirTDA(*escom,csalones);
            break;

        case 5:
            destruirTDA(escom);
            break;

        default:
            puts("Eso no existe");
            break;
        }
    } while (opcion != 4 );
    
    

    return 0;
}
