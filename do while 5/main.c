/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 9 de octubre de 2020, 08:38 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int x = 2, suma;

    do{
        x = x + 3;
        if(x % 5 == 0)
            suma = suma + x;
        printf("%d", x);
    }while(x < 50);
    printf("\n%d", suma);
    
    return (EXIT_SUCCESS);
}

