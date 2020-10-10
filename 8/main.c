/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 14 de septiembre de 2020, 07:21 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int i, j, cont=0;
    for(i=0; i<3; i++)
        for(j=10; j>8; j--){
            printf("Interaccion %d\n", cont+1);
            cont=cont+1;
        }
    
    printf("\n");
    
    cont=0;
    for(i=0; i<3; i++)
        for(i=10; i>8; i--){
            printf("Interaccion %d\n", cont+1);
            cont=cont+1;
        }
    
    printf("\n");
    
    cont=0;
    for(i=0; i<3; i++)
        for(j=i; j<=2; j++){
            printf("Interaccion %d\n", cont+1);
            cont=cont+1;
        }
    return (EXIT_SUCCESS);
}

