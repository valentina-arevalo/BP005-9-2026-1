#include <stdio.h>

void leerMatriz(int m[][3], int filas);
int sumarFila(int m[][3], int fila);
void mostrarSumasPorFila(int m[][3], int filas);

int main() {
    int matriz[3][3];

    leerMatriz(matriz,3);
    mostrarSumasPorFila(matriz,3);

    return 0;
}

void leerMatriz(int m[][3], int filas){

    int i,j;

    for(i=0;i<filas;i++){

        for(j=0;j<3;j++){

            printf("Digite [%d][%d]: ",i,j);
            scanf("%d",&m[i][j]);

        }
    }
}

int sumarFila(int m[][3], int fila){

    int suma=0;
    int j;

    for(j=0;j<3;j++){

        suma+=m[fila][j];

    }

    return suma;
}

void mostrarSumasPorFila(int m[][3], int filas){

    int i;

    for(i=0;i<filas;i++){

        printf("Suma fila %d: %d\n",i,sumarFila(m,i));

    }

}
