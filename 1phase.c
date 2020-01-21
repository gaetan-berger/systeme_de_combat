
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){

int viePerso ;
int attaquePerso ;
int vieMonstre ;
int attaqueMonstre ;
int choix;

attaquePerso = 2 ;
attaqueMonstre = 4 ;
vieMonstre = 10 ;
viePerso = 20 ;

printf("un zombie sort de terre il as %d point de vie \n",vieMonstre );
printf("et toi tu as %d point de vie \n",viePerso );
while ( vieMonstre > 0 ){
printf("tu peux l'attaquer = 1 ou te defendre = 2 \n" );
scanf("%d \n",&choix);

if (choix == 1 ){
printf("vue ca vitesse tu peux facilement le voir venir et tu l'attaque \n" );
vieMonstre = vieMonstre - attaquePerso ;
printf("il reste %d point de vie au zombie\n",vieMonstre );
if (vieMonstre <= 0 ){
  printf("Bravo tu viens de tuer le zombie \n" );
  break;
}
}
if (choix == 2 ){
printf("tu te protege de ton bouclier \n" );
attaqueMonstre = 4 ; // je sias pas si j'ai bon mais si je ne met pas a nouveau lattaque a 4 elle vas etre 4/4 pour 4/4/4 donc le monstre ne pourras pas gagner
attaqueMonstre = attaqueMonstre / 4;
}

printf("attention le zombie t'attaque \n" );
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
