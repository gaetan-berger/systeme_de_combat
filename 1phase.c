
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){

int vieMonstre ;
int attaque ;

attaque = 2 ;
vieMonstre = 10 ;

printf("un zombie sort de terre il as %d point de vie \n",vieMonstre );
printf("vue ca vitesse tu peux facilement le voir venir et tu l'attaque \n" );
vieMonstre = vieMonstre - attaque ;
 printf("il reste %d point de vie au zombie\n",vieMonstre );


    return 0;
}
