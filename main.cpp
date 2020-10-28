#include "arregloDinamico.h"

int main()
{
    ArregloDinamico arreglo;

    arreglo.insertar_final("Hola");
    arreglo.insertar_final("que");
    arreglo.insertar_final("tal");
    arreglo.insertar_final("estas");
    arreglo.insertar_final("son 8");
    arreglo.insertar_final("cadenas");
    arreglo.insertar_final("de");
    arreglo.insertar_final("prueba");

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << endl;
    }

    arreglo.insertar_inicio("2.-al inicio del arreglo");
    arreglo.insertar_inicio("1.-Probando insertar");

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << endl;
    }
    
    

    return 0;
}