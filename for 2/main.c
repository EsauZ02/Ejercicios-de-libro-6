/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 9 de octubre de 2020, 09:09 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int x,i,i2,suma;
    printf("Ingrese un numero\n");
    scanf("%d",&i);
    
    for(i;i>0;i--){
        i2=i*i*i;
        suma=suma+i2;
    }
    
    
    printf("\n%d",suma);
    
    return (EXIT_SUCCESS);
}

