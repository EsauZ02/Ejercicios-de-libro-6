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

/*
 * 
 */
int main(int argc, char** argv) {

    int x = 1, m = 35, m2, suma;
    while(x <= 20){
        m2 = m2 + m;
        suma = suma + m2;
        x++;
    }
    printf("%d", suma);
    
    
    
    
    return (EXIT_SUCCESS);
}

