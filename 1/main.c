/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 14 de septiembre de 2020, 11:48 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char** argv) {
   
    int numero, a, numero1;
    
    printf("ingresa 10 numeros:\n");
    
    while(a < 10){
        a++;
        scanf("%d", &numero);
        numero1 = numero1 + numero;
    }
    printf("\nla suma de los enteros leidos es:%d", numero1);
    
    
    
    
    return (EXIT_SUCCESS);
}

