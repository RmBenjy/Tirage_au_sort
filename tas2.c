#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  // Récupération du nom de l'utilisateur
  char nom[100],prenom[100];
  printf("Quel est votre nom ? ");
  scanf("%s",&nom);
  printf("Quel est votre prenom ? ");
  scanf("%s",&prenom);

  // Récupération du minimum et du maximum pour le tirage au sort
  int min, max;
  printf("Entrez le minimum pour le tirage au sort : ");
  scanf("%d", &min);
  printf("Entrez le maximum pour le tirage au sort :");
  scanf("%d", &max);

  // Initialisation de la fonction rand()
  srand(time(NULL));

  // Tirage au sort
  int nombre_tire = rand() % (max - min + 1) + min;

  // Affichage du résultat
  printf("%s %s, le nombre tiré au sort est : %d\n",prenom, nom, nombre_tire);

  // Demande à l'utilisateur s'il souhaite refaire un tirage au sort
  char reponse;
  printf("Souhaitez-vous refaire un tirage au sort ? (o/n) ");
  scanf(" %c", &reponse);

  // Si l'utilisateur souhaite refaire un tirage au sort, on recommence la procédure
  if (reponse == 'o') {
    main();
  }

  return 0;
}
