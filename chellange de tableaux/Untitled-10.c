//chellange 10
#include <stdio.h>

int main() {
    int n, target, found = 0;

    // Demander le nombre d'éléments
    printf("Entrez le nombre d'éléments: ");
    scanf("%d", &n);

    int arr[n];

    // Demander les éléments du tableau
    printf("Entrez les éléments du tableau:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Demander l'élément à rechercher
    printf("Entrez l'élément à rechercher: ");
    scanf("%d", &target);

    // linéaire
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = 1;
            break;
        }
    }

    // résultat
    if (found) {
        printf("L'élément %d est présent dans le tableau.\n", target);
    } else {
        printf("L'élément %d n'est pas présent dans le tableau.\n", target);
    }

    return 0;
}
