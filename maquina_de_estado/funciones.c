#include "mylib.h"


st_datos f_inicio(void){
    FILE *fp;
    st_datos bf;
    if ((fp=fopen("config.conf","rb"))==NULL){
        printf("Error")
    return NULL;
    }
    fread(&bf,sizeof(st_datos),1,fp);
    while(!feof(fp)){
        /*esta parte del c?digo dependeria de c?mo est? cargado
        el mapa a recorrer en el archivo config.conf para poder cargarlo en
        la strucutura de datos.
        */
        fread(&bf,sizeof(st_datos),1,fp);
    }
    fclose(fp);
    return bf;
}

estados f_espera(st_datos){
    if(!st_datos.bateria) return avanzar;
}

estados f_avanzar(st_datos){
    int contador=0;
    while(1){
        if(st_datos.obs) return corregir;
        if(st_datos.bateria<15) return cargar;
        if(st_datos.r_completo) return recall;
        /*Esta parte del codigo luego de pasar por las condiciones para pasar de estado
        deberia permitir que la aspiradora avance ya que no cambia de estado*/
        if (contador>0){
                system("cls");
                contador = 0;
        }
        printf("\n\tAvanzando");
        contador ++;


    }
}

estados f_corregir(st_datos){
    while(1){
        if(st_datos.obs){
            /*rotacion de 30?*/
            printf("\n\tRotando 30? a la derecha...");
        }
        else{
            return avanzar;
        }
    }
}

estados f_cargar(st_datos){
    /*recorrido automatico hasta la plataforma de carga*/
    while(bateria!=100){
        printf("\n\tCargando... Bateria: %d %",st_datos.bateria);
    }
    return avanzar;
}

estados f_recall(st_datos){
    /*Regresa a la plataforma de carga para esperar otro inicio.(Se apaga)*/
    printf("\n\tEjecutando ruta a la plataforma de carga.");
}

