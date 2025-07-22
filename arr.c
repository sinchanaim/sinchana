#include <stdio.h>

int main()
{
    int arr[5], i;

    // Input 5 elements
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Output 5 elements
    printf("You entered: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
