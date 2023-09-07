#include <stdio.h>
#include "Jules.c"
#include "Charly.c"

int main() {
    int metier;
    int y;
    float salaireannuel;
    char code;
    float salaireM;
    double prixTaxes;



    printf("Quel est votre metier ? ( 1. agriculter, 2. comptable, 3. etudiant, 4. fonctionnaire, 5. bucheron)\n");
    scanf("%d", &metier);
    printf("Quelle est votre année de naissance ?\n");
    scanf("%d", &y);
    printf("Quel est votre revenu annuel ?\n");
    scanf("%f", &salaireannuel);

    code = fiscalcode(metier);
    y = age(y);
    salaireM = revenumensuel(salaireannuel);
    prixTaxes = Taxes(salaireannuel);

    printf("Bienveue, nos services constates que vous avez %d ans.\n Vous devrez payer cette annee %.2lf.\n Votre code d activite est %c.\n Votre revenu mensuel est de %.2f.\n",y,prixTaxes,code,salaireM);


    return 0;
}