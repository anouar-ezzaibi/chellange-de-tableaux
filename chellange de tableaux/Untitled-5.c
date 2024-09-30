//chellange 6
#include <stdio.h>

int main() {
    int n, factor;

    // Demander le nombre d'éléments
    printf("Entrez le nombre d'éléments: ");
    scanf("%d", &n);

    int arr[n];

    // Demander les éléments du tableau
    printf("Entrez les éléments du tableau:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Demander le facteur de multiplication
    printf("Entrez le facteur de multiplication: ");
    scanf("%d", &factor);

    // Multiplier chaque élément par le facteur
    for (int i = 0; i < n; i++) {
        arr[i] *= factor;
    }

    // Afficher le tableau résultant
    printf("Tableau résultant:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

