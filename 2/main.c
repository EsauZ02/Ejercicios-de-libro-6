/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 14 de septiembre de 2020, 07:19 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int x, i, i2, suma;
    printf("ungresa un numero\n");
    scanf("%d", &i);
    
    while(i>0){
        i2 = i * i * i;
        suma = suma + i2;
        i--;              
    }
    printf("\n%d", suma);
    
    
    
    return (EXIT_SUCCESS);
}

