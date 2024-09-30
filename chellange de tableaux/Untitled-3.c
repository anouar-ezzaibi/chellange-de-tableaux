/chellange 4

#include <stdio.h>

int main() {
    int n, i, max;

    
    printf("Entrez le nombre d'éléments: ");
    scanf("%d", &n);

    int arr[n]; 
    
    printf("Entrez les éléments:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0]; 

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
    printf("Le plus grand élément est: %d\n", max);
    return 0;
}