#include <stdio.h>

int main() {
    int a = 10, b = 15;
    int *const ptr = &a;
    *ptr = 3;
    //No se hace:
    ptr = &b;
    
    return 0;
}