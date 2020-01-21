
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){

int viePerso ;
int attaquePerso ;
int vieMonstre ;
int attaqueMonstre ;

attaquePerso = 2 ;
attaqueMonstre = 4 ;
vieMonstre = 10 ;
viePerso = 20 ;

printf("un zombie sort de terre il as %d point de vie \n",vieMonstre );

while ( vieMonstre > 0 ){

printf("vue ca vitesse tu peux facilement le voir venir et tu l'attaque \n" );
vieMonstre = vieMonstre - attaquePerso ;
if (vieMonstre <= 0 ){
  printf("Bravo tu viens de tuer le zombie \n" );
  break;
}
printf("il reste %d point de vie au zombie\n",vieMonstre );
printf("attention le zombie contre attaque \n" );
viePerso = viePerso - attaqueMonstre ;
if  (viePerso <=0){
  printf("quelle dommage tu es mort !\n" );
  break;
}
printf("il te reste %d point de vie \n",viePerso );

if (vieMonstre <= 0 && viePerso <= 0){
  printf("dans un dernier elan tu lui assène le coup fatale\n" );
  break;
}
}

    return 0;
}
