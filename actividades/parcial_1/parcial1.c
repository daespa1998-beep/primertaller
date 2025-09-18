#include <stdio.h>
//estrutura que estamos def
typedef struct {
    int codigo;
    float nota;
} Estudiante;
// datos de los estudiante 
Estudiante estud[]= {
    {1235138975, 4.5},
    {2545555282, 2.5},
    {1255613221, 3.4},
    {2154653445, 1.5},
    {1446511654, 5.0}
};
int n = 5;   
// puse la cantidad de estudiantes 
// funciones,  nota maxima
float notaMax(int i){
    if (i == n- 1)return estud[i] .nota;
    float max =notaMax (i + 1);
    return (estud[i] .nota > max) ?  estud[i] .nota: max; 
    //? if-else // esta funcion calcula la nota maxima
}



// menu de opciones
int main() {
    int opcion; 
    do {
        printf("\n  Menu  \n");
        printf("1. Nota Maxima \n");
        printf("elige opcion: ");
        scanf("%d", &opcion); // lee la opcion

        if (opcion == 1) {
            printf("la nota maxima es: %.1f\n", notaMax(0));
        }
    } while (opcion != 0); 
    return 0; // fin 
}                                     

