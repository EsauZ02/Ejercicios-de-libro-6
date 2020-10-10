/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 9 de octubre de 2020, 08:34 PM
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
    
    do{
          i2 = i * i * i;
        suma = suma + i2;
        i--;    
    }while(i>0);
    printf("\n%d", suma);
    
    return (EXIT_SUCCESS);
}

