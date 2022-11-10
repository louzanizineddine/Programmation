#include <stdio.h>

#include <stdlib.h>

struct Case {
  char value;
};

struct XO {
  struct Case tab[3][3];
  int fin;
};

void afficher(struct XO *xo) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (xo->tab[i][j].value == 'X') {
        printf(" X ");
      } else if (xo->tab[i][j].value == 'O') {
        printf("O");
      } else {
        printf(" %c ", xo->tab[i][i].value);
      }
    }
    printf("\n");
  }
}

void init(struct XO *xo) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      xo->tab[i][i].value = ' ';
    }
    printf("\n");
  }
}

int main() {
  struct XO jeu;
  jeu.fin = 0;
  int times = 0;
  init(&jeu);

  afficher(&jeu);
  int x, y;
  while (times <= 9) {
    printf("premier joueur joue avec x \n");
    printf("enter les coordonnes de la case");
    scanf("%d", &x);
    scanf("%d", &y);
    jeu.tab[x][y].value = 'X';
    times++;
    afficher(&jeu);

    printf("deuxieme joueur joue avec o \n");

    printf("enter les coordonnes de la case");
    scanf("%d", &x);
    scanf("%d", &y);
    jeu.tab[x][y].value = 'O';
    times++;
    afficher(&jeu);
  }

  return 0;
}
