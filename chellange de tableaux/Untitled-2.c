 //chellange 3
}
#include <stdio.h>

int main() {
    int n, i;
    int somme = 0;

    // Demande le nombre d'éléments
    printf("Entrez le nombre d'éléments : ");
    scanf("%d", &n);

    // Vérification si le nombre d'éléments est positif
    if (n <= 0) {
        printf("Veuillez entrer un nombre positif d'éléments.\n");
        return 1;
    }

    int tableau[n]; 

    // Lecture des éléments du tableau
    printf("Entrez les %d éléments :\n", n);
    for (i = 0; i < n; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &tableau[i]); 
    }

    // Calcul de la somme des éléments
    for (i = 0; i < n; i++) {
        somme += tableau[i]; 
    }

    // Affichage de la somme totale
    printf("La somme des éléments est : %d\n", somme);

    return 0; 
}