/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 9 de octubre de 2020, 09:10 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    char frase;
    printf("Introduzca la cadena de caracteres con un punto al final\n");
    
    for(frase; frase!='.'; frase){
        scanf("%c",&frase);
        switch(frase){
            case 'a': frase='e'; break;
            case 'e': frase='i'; break;
            case 'i': frase='o'; break;
            case 'o': frase='u'; break;
            case 'u': frase='a'; break;
        }
        printf("%c",frase);
    }
    
    return (EXIT_SUCCESS);
}

