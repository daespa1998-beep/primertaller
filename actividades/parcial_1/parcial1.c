#include <stdio.h>
//estrutura que estamos def
typedef struct {
    int codigo;
    float nota;
} Estudiante;
// datos de los estudiante 
Estudiante estud[]= {
    {1235138975, 4.5},
    {2545555, 2.5},
    {12556132, 3.4},
    {215465344, 1.5},
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
// promedio
float sumaNotas(int i){
    if (i == n- 1) return estud[i] .nota;
    return estud[i] .nota + sumaNotas(i + 1);
    // esta funcion calcula la suma de las notas
}


// menu de opciones
int main() {
    int opcion; 
    do {
        printf("\n  Menu  \n");
        printf("1. Nota Maxima \n");
        printf("2. Promedio \n");
        printf("0. Salir \n");
        printf("elige opcion: ");
        scanf("%d", &opcion); // lee la opcion

        if (opcion == 1) {
            printf("la nota maxima es: %.1f\n", notaMax(0));
        }
        else if (opcion == 2) {
            float promedio = sumaNotas(0)/(float)n;
            printf("el promedio es: %.2f\n", promedio);
        }
        else if (opcion != 0) {
            printf("Opcion no valida. Intente de nuevo.\n");
        }
    } while (opcion != 2); 
    return 0; // fin 
}                                     

