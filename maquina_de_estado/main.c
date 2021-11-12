#include "mylib.h"

int main()
{
    st_datos datos_config;
    estados estado = espera;
    estados (*puntero_estados[])(st_datos) = {
        f_espera, f_avanzar, f_corregir, f_cargar, f_recall
        };

    datos_config = f_inicio();
    while(1) estado = (*puntero_estados[estado])(datos_config);

    return 0;
}
