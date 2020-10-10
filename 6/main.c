/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 14 de septiembre de 2020, 07:21 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    char frase;
    printf("introduce una cadena de caracteres y terminala con un punto\n");
    while(frase !='.'){
        scanf("%c", &frase);
        switch(frase){
            case 'a': frase = 'e'; break;
            case 'e': frase = 'i'; break;
            case 'i': frase = 'o'; break;
            case 'o': frase = 'u'; break;
            case 'u': frase = 'a'; break;
        }
        printf("%c", frase);
    }
    
    
    return (EXIT_SUCCESS);
}

