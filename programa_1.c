//El .exe de c es mucho mas ligero que el de c++
/* Comentarios
Multilinea */
// Comentario de una linea

// Librerias principales de C
#include <stdio.h>
#include <stdlib.h>

/* Constante */
// Declaraci�n de constantes fuera del main
#define PORCENTAJE_IVA 16

//El funci�n principal main desde donde se ejecuta el programa que regresa un entero//
int main(){
    /* Impresi�n de pantalla */
    // Imprime un mensaje en pantalla con la funci�n printf
    // \n slash de salto de linea como el endl
    printf("Hola Mundo C!\n");

    /* Enteros */
    // Declaraci�n de un entero
    int entero_a;
    // Asignaci�n de valor
    entero_a = 90;
    // Imprimir en pantalla el valor
    printf("%d\n", entero_a);
    // Consejo: no poner mismos nombres a variables como a constantes
    // para evitar basura declarar antes de usar valor
    // Declracion de 2 enteros en una misma linea
    int entero_b, entero_c;
    entero_b = 10;
    entero_a = entero_a + entero_b;
    // Asignar varias operaciones a una variable
    entero_c = 2*(entero_a * entero_b)/(entero_a + entero_b);

    /* Flotantes */
    // Variable real y su impresion en pantalla
    float a, b;
    a = 10.7;
    b = 2.4;
    printf("a = %f\n", a);

    /* Operadores aritm�ticos */
    printf("a + b = %f\n", a + b); //suma
    printf("a - b = %f\n", a - b); //resta
    printf("a * b = %f\n", a * b); //multiplicaci�n
    printf("a / b = %f\n", a / b); //divisi�n
    printf("entero_a mod entero_b = %d\n", entero_a % entero_b); //modulo resto de la division no para flotantes
    printf("a + b * 2 = %f\n", a + b * 2); //prioridad de operador multiplicaci�n
    printf("(a + b) * 2 = %f\n", (a + b) * 2); //prioridad de operador agrupacion

    // Valor que regresa el main al terminar el programa
    return 0;
}
