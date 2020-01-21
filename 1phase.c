
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(void){

int viePerso ;
int attaquePerso ;
int vieMonstre ;
int attaqueMonstre ;
int choix ;
int choixMonstre ;

attaquePerso = 4 ;
attaqueMonstre = 4 ;
vieMonstre = 10 ;
viePerso = 20 ;
choixMonstre = rand()%2+1;

printf("un zombie sort de terre il as %d point de vie \n",vieMonstre );
printf("et toi tu as %d point de vie \n",viePerso );
while ( vieMonstre > 0 ){
  attaquePerso = 4 ;
  attaqueMonstre = 4 ; // je sias pas si j'ai bon mais si je ne met pas a nouveau lattaque a 4 elle vas etre 4/4 pour 4/4/4 donc le monstre ne pourras pas gagner
printf("tu peux l'attaquer = 1 ou te defendre = 2 \n" );
scanf("%d \n",&choix);

if (choix == 1 ){
printf("vue ca vitesse tu peux facilement l'attaque \n" );
vieMonstre = vieMonstre - attaquePerso ;
printf("il reste %d point de vie au zombie\n",vieMonstre );
if (vieMonstre <= 0 ){
  printf("Bravo tu viens de tuer le zombie \n" );
  break;
}
}
if (choix == 2 ){
printf("tu te protege de ton bouclier \n" );
attaqueMonstre = attaqueMonstre / 4;
}
printf(" %d ", choixMonstre);
if (choixMonstre == 2 ){
printf("attention le zombie t'attaque \n" );
viePerso = viePerso - attaqueMonstre ;
printf("il te reste %d point de vie \n",viePerso );
if  (viePerso <=0){
  printf("quelle dommage tu es mort !\n" );
  break;
}
}
if (choixMonstre == 1 ){
printf("le zombie se protege \n" );
attaquePerso = attaquePerso /4 ;
}
if (vieMonstre <= 0 && viePerso <= 0){
  printf("dans un dernier elan tu lui assène le coup fatale\n" );
  break;
}
}

    return 0;
}
