#include <stdio.h>
// Referenciación: es la obtencion de la direccion de una variable
int main() {
    int *ptr_int;
    float *ptr_float;
    int value;
    ptr_int = &value;
    //No se puede hacer esto:
    ptr_float = &value;
    return 0;
}
  