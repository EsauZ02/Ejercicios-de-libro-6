/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 9 de octubre de 2020, 08:37 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float x, suma, media, num;
    printf("introduce la lista de numeros reales (>0) finalizada en -1.0:\n");
    
    do{
        scanf("%f", &x);
        suma = suma + x;
        num++;
    }while(x != -1.0);
    
    media = (suma + 1) / (num - 1);
    printf("%.2f", media);
    
    return (EXIT_SUCCESS);
}

