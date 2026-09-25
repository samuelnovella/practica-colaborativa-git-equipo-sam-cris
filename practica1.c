#include <stdio.h>

void actualiza_eventos (int a[],int b [],int c [][6]);
void total_eventos (int matriz [][6]);
void imprimir_matriz(int matriz [][6]);
void deteccion_equipos (int matriz [][6]);
void imprimir_arreglo (int eventos []);
int main (){
    //Equipos de 1 a 5
int equipos[30]={1,2,4,5,2,3,1,2,2,4,5,3,2,5,1,3,5,2,4,3,2,3,4,5,4,1,2,3,4,3};
//100=acceso correcto,200=contraseña incorrecta,300=usuario inexistente,400=usuario bloqueado
int eventos [30]={100,200,100,100,100,300,200,200,200,100,100,100,300,100,200,100,
                 100,100,200,400,200,100,200,100,200,100,400,100,100,300};
//matriz de equipos por eventos
int matriz [5][6]={
    {1,0,0,0,0,0},
    {2,0,0,0,0,0},
    {3,0,0,0,0,0},
    {4,0,0,0,0,0},
    {5,0,0,0,0,0}
};
    actualiza_eventos (equipos,eventos,matriz);
    imprimir_matriz(matriz);
    printf ("\n");
    total_eventos (matriz);
    imprimir_matriz(matriz);
     printf ("\n");
    deteccion_equipos (matriz);
    printf("\n");
    imprimir_arreglo (eventos);
return 0;
}
void imprimir_matriz(int matriz [][6]){
    printf ("E \t Cc \t Ci \t Ui \t Ub \t T \n");
    for (int i=0;i<=4;i++){
        for (int j=0;j<=5;j++){
            printf ("%d \t",matriz[i][j]);
        }
        printf ("\n");
    }
};
void imprimir_arreglo (int eventos []){
    for (int i=0;i<=29;i++){
        printf("%d \n",eventos[i]);
    }
};
int obterner_indice (int evento){
    if (evento==100){
        return 1;
    }
    if (evento==200){
        return 2;
    }
    if (evento==300){
        return 3;
    }
    if (evento==400){
        return 4;
    }
    
}

void actualiza_eventos (int equipos[],int eventos [],int matriz [][6]){
    for (int i=0;i<=29;i++){
        int equipo=equipos[i];
        int evento=eventos[i];
        int *apuntador = matriz[equipo-1];
        int indice = obterner_indice (evento);
        *(apuntador + indice)+=1;
    }
};

void total_eventos (int matriz [][6]){
    for (int i=0;i<=4;i++){
        int *puntero= matriz [i];
        int suma=0;
        for (int j=1;j<=4;j++){
            suma += *(puntero+j);
        };
        *(puntero+5)=suma;
    };
};

void deteccion_equipos (int matriz [][6]){
    for(int i=0;i<=4;i++){
        int *puntero=matriz [i];
        int suma=0;
        for(int j=2;j<=3;j++){
            suma +=*(puntero+j);
        };
        if (suma>=3){
            printf("equipo %d sospechoso intentos fallidos %d \n",*puntero,suma);
        } else {
            printf("equipo %d normal \n",*puntero);
        }
        
    }
};
