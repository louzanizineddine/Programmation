#include <stdio.h>
#include <stdlib.h>

#define TAUX_CNSS 0.175;
#define TAUX_IMPOT 0.035;
#define PRIME_ENFANT 100;

int main () {
    int nmbr_enfants;
    float salaire_net , salair_brut , valeur_impot , valuer_CNSS ,
        slaire_base , prime_technicite , prime_transport, prime_enfants ,taux_travail,
        nmbr_jours_travaille , valeur_CNSS;
    printf("\t\t\t *** PROGRAM CALCUL SALAIR NET *** \n"); 
    printf("\n");
    printf("\n");

    printf("entrer le nombre d'enfants vous avez \n");
    scanf("%d" , &nmbr_enfants);

    prime_enfants = nmbr_enfants * PRIME_ENFANT;

    // we can add some checking to make sure that the input is always less than 30
    printf("entrer le nombre de jours travailles \n");
    scanf("%f" , &nmbr_jours_travaille);

    taux_travail = nmbr_jours_travaille / (float)26;

    printf("entrer Le salaire de base \n");
    scanf("%f" , &slaire_base);    
    printf("entrez le prime de technicite \n");
    scanf("%f" , &prime_technicite);
    
    printf("entrer le prime de transport \n");
    scanf("%f" , &prime_transport);

    salair_brut = (slaire_base + prime_technicite + prime_transport + prime_enfants) * taux_travail;
    printf("salair brut  = %f \n" , salair_brut);

    valeur_impot =  salair_brut * TAUX_IMPOT;
    valeur_CNSS = salair_brut * TAUX_CNSS;
    salaire_net = salair_brut - valeur_impot - valeur_CNSS;
    printf("vortre salaire net est %f \n" , salaire_net);


    return 0;
}