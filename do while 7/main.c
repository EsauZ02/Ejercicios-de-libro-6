/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 9 de octubre de 2020, 08:51 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int x = -3, f, menor;
    do{
        f = 5 * (x * x) + (3 * x) + 8;
        if(menor > f)
            menor = f;
        x++;
    }while(x <= 10);
     x = menor;
    f = 5 * (x * x) + (3 * x) + 8;
    printf("el valor minimo de la función es:%d\n", f);
    printf("y se alcanza en x = %d", x);
    
    return (EXIT_SUCCESS);
}

