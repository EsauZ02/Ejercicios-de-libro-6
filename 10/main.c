/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 14 de septiembre de 2020, 07:22 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int x,y;
    
    while((x<1) || (x>10)){
        printf("Introduzca un valor entre 1 y 10\n");
        scanf("%d",&x);
    }
    y=1;
    printf("\n");
    while(y<=10){
        printf("%d x %d = %d\n",x,y,(x*y));
        y++;
    }

    
    return (EXIT_SUCCESS);
}

