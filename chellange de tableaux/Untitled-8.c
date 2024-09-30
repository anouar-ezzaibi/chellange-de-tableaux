//chellange 8
#include <stdio.h>

int main() {
    int n;

    // Demander le nombre d'éléments
    printf("Entrez le nombre d'éléments: ");
    scanf("%d", &n);

    int original[n], copied[n];

    // Demander les éléments du tableau original
    printf("Entrez les éléments du tableau original:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &original[i]);
    }

    // Copier les éléments dans le tableau copié
    for (int i = 0; i < n; i++) {
        copied[i] = original[i];
    }

    // Afficher le tableau original
    printf("Tableau original:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", original[i]);
    }
    printf("\n");

    // Afficher le tableau copié
    printf("Tableau copié:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", copied[i]);
    }
    printf("\n");

    return 0;
}
