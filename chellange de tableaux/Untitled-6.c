#include <stdio.h>

int main() {
    int n;

    // Demander le nombre d'éléments
    printf("Entrez le nombre d'éléments: ");
    scanf("%d", &n);

    int arr[n];

    // Demander les éléments du tableau
    printf("Entrez les éléments du tableau:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Tri du tableau (méthode simple de tri à bulles)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Échanger les éléments
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Afficher le tableau trié
    printf("Tableau trié en ordre croissant:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
