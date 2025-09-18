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
    {5841641445, 3.4},
    {6516146661, 1.5},
    {1446511654, 5.0}
};
int n = 5;   
// puse la cantidad de estudiantes 
// funciones
//1 nota maxima
float notaMax(int i){
    if (i == n- 1)return
estud[i] .nota;
    float max =notaMax (i + 1);
    return (estud[i] .nota > max) ?
estud[i] .nota: max;
}