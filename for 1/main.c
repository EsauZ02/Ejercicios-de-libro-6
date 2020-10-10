/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 9 de octubre de 2020, 08:59 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

int num,x,num1;
    
    printf("Ingrese 10 numeros enteros\n");
    
    for(x;x<10;x++){
        scanf("%d",&num);
        num1=num1+num;
    }

    
    printf("\nLa suma de los enteros es: %d\n",num1);
    
    return (EXIT_SUCCESS);
}

