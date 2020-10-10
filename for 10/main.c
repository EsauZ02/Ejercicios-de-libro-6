/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 9 de octubre de 2020, 09:11 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int x,y;
    
    for(x; (x<1)||(x>10); x){
        printf("Introduzca un valor entre 1 y 10\n");
        scanf("%d",&x);
    }
    printf("\n");
    for(y=1; y<=10; y++){
        printf("%d x %d = %d\n",x,y,(x*y));
    }
    
    return (EXIT_SUCCESS);
}

