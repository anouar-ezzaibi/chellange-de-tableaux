//challenge 2
#include <stdio.h>

int main() {
    int n;
    printf("Entrez le nombre d'éléments: ");
    scanf("%d", &n);

    float elements[n];

    // Saisie des éléments
    for (int i = 0; i < n; i++) {
        printf("Entrez l'élément %d: ", i + 1);
        scanf("%f", &elements[i]);
    }

    // Affichage des éléments
    printf("Les éléments du tableau sont:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f\n", elements[i]);
    }

    return 0;