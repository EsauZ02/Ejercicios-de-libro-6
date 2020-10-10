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

    int x, y;
    
    while(x<10){
        x++;
        y=0;
        printf("\n");
        while(y<10){
            y++;
            printf("%d x %d = %d\n",x,y,(x*y));
        }
    }
    
    return (EXIT_SUCCESS);
}

