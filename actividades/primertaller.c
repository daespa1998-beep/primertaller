#include <stdio.h>

#define N 10
int ingresarNumero(int vector [N]);
int mostrarNumero(int vector [N]);
void ordenarAcendente(int arr[N], int n);
void ordenarDesendente(int arr[N], int n);

int main() {
    int arreglo[N];
    ingresarNumero(arreglo);

    printf("\nArreglo original:\n");
    mostrarNumero(arreglo);

    printf("\n---Asendente sort---\n");
    ordenarAcendente(arreglo, N);

    printf("\n---Desendente sort---\n");
    ordenarDesendente(arreglo, N);

    return 0;

}

int ingresarNumero(int vector [N]){
    for ( int i=0; i<N; i++){
        do{
            prinf("dogite un numero positivo, posicion %d:",i+1);
            scanf("%d",& vector [i]);
            if(vector[i] <=0){
                printf("Error: debe ser un numero positivo");
            }
        }while(vector[i]<=0);
    }return 0;
}