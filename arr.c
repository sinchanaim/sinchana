#include <stdio.h>

int main()
{
    int arr[5], i;

    // Input 5 elements
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Output 5 elements
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
