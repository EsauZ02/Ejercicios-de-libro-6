/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 14 de septiembre de 2020, 07:20 PM
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    int x = 2, suma;
    while(x < 50){
        x = x + 3;
        if(x % 5 == 0)
            suma = suma + x;
        printf("%d", x);
    }
    printf("\n%d", suma);
    
    

    return (EXIT_SUCCESS);
}

