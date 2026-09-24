#include <stdio.h>

void actualiza_eventos (int a[],int b [],int c [][6]);
int main (){
    //Equipos de 1 a 5
int equipos[30]={1,2,4,5,2,3,1,2,2,4,5,3,2,5,1,3,5,2,4,3,2,3,4,5,4,1,2,3,4,3};
//100=acceso correcto,200=contraseña incorrecta,300=usuario inexistente,400=usuario bloqueado
int eventos [30]={100,200,300,200,100,300,200,200,200,300,100,100,300,100,200,100,
                 200,100,200,400,200,100,200,100,200,100,400,100,100,300};
//matriz de equipos por eventos
int matriz [5][6]={
    {1,0,0,0,0,0},
    {2,0,0,0,0,0},
    {3,0,0,0,0,0},
    {4,0,0,0,0,0},
    {5,0,0,0,0,0}
};
    actualiza_eventos (equipos,eventos,matriz);
    for (int i=0;i<=4;i++){
        for (int j=0;j<=5;j++){
            printf ("%d \t",matriz[i][j]);
        }
        printf ("\n");
    }
return 0;
}

void actualiza_eventos (int equipos[],int eventos [],int matriz [][6]){
    for (int i=0;i<=29;i++){
        int equipo=equipos[i];
        int evento=eventos[i];
        if (equipo==1){
            if(evento==100){
                matriz[0][1] +=1;
            }
             if(evento==200){
                matriz[0][2] +=1;
            }
             if(evento==300){
                matriz[0][3] +=1;
            }
             if(evento==400){
                matriz[0][4] +=1;
            }
        }
         if (equipo==2){
            if(evento==100){
                matriz[1][1] +=1;
            }
             if(evento==200){
                matriz[1][2] +=1;
            }
             if(evento==300){
                matriz[1][3] +=1;
            }
             if(evento==400){
                matriz[1][4] +=1;
            }
        }
         if (equipo==3){
            if(evento==200){
                matriz[2][1] +=1;
            }
             if(evento==200){
                matriz[2][2] +=1;
            }
             if(evento==300){
                matriz[2][3] +=1;
            }
             if(evento==400){
                matriz[2][4] +=1;
            }
        }
         if (equipo==4){
            if(evento==300){
                matriz[3][1] +=1;
            }
             if(evento==200){
                matriz[3][2] +=1;
            }
             if(evento==300){
                matriz[3][3] +=1;
            }
             if(evento==400){
                matriz[3][4] +=1;
            }
        }
         if (equipo==5){
            if(evento==100){
                matriz[4][1] +=1;
            }
             if(evento==200){
                matriz[4][2] +=1;
            }
             if(evento==300){
                matriz[4][3] +=1;
            }
             if(evento==400){
                matriz[4][4] +=1;
            }
        }

    }
};
