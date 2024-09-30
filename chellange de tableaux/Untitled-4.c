//chellange 5
#include <stdio.h>

int main() {
    int n, i, min;

    // Étape 1 : Demander le nombre d'éléments
    printf("Entrez le nombre d'éléments: ");
    scanf("%d", &n);

    int arr[n]; // Étape 2 : Déclarer un tableau de taille n

    // Étape 3 : Saisir les éléments
    printf("Entrez les éléments:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    min = arr[0]; // Étape 4 : Initialiser min avec le premier élément

    // Étape 5 : Trouver le minimum
    for (i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i]; // Mettre à jour min si un élément plus petit est trouvé
        }
    }
  // Étape 6 : Afficher la valeur minimale
    printf("Le plus petit élément est: %d\n", min);
    return 0;