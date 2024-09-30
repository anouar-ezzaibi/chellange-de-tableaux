//chellange 13
#include <stdio.h>

int main() {
    int n;

    // Demander le nombre d'éléments
    printf("Entrez le nombre d'éléments: ");
    scanf("%d", &n);

    int arr[n];
    int sum = 0;

    // Demander les éléments du tableau
    printf("Entrez les éléments du tableau:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // Ajouter chaque élément à la somme
    }

    // Calculer la moyenne
    double average = (double)sum / n;

    // Afficher la moyenne
    printf("La moyenne des éléments du tableau est: %.2f\n", average);

    return 0;
}

