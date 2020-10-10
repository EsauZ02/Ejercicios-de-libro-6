/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 5 de octubre de 2020, 10:17 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int n, a, numero;
    
    printf("ingresa 10 numeros\n");
    
    do{
        a +=1;
        scanf("%d", &n);
        numero = numero + n;
    }while(a < 10);
    printf("\nla suma de los enteros leidos es:%d", numero);
    
    return (EXIT_SUCCESS);
}

