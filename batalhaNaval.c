#include <stdio.h>

int main() {
    int matriz[10][10] = { };
    char colunas[10] = {'A','B','C','D','E','F','G','H','I','J'};

    for (int i = 0; i < 5; i++) {
    matriz[i][3] = 3;  
    matriz[2][i+1]= 3;
    
}      
    for (int i=1;i<4;i++){
    matriz [5][2]=2 ;
    matriz [6][i]=2;
}
    for (int i =0; i < 5; i++) {
    matriz[7][i] = 2;     
}      


    for (int i =0; i < 10; i++) {
    matriz[3][7] = 1;  matriz[7][7] = 1;
 }   
    for (int i =6; i < 9; i++) {
    matriz[4][i] = 1;
    matriz[6][i] = 1;
 }   
    for (int i =5; i < 10; i++) {
    matriz[5][i] = 1;  
 }   
    
       
    printf("   ");
    
    for (int j = 0; j < 10; j++) {
        printf("%c ", colunas[j]);
    }
    printf("\n");

    
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); 
        for (int j = 0; j < 10; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}