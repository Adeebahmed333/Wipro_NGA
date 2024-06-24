#include <stdio.h>

int main()
{
    int n, target, result = -1;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target element: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            result = i;
            break;
        }
    }

    if (result != -1)
    {
        printf("Element found at index %d.\n", result);
    }
    else
    {
        printf("Element not found.\n");
    }

    return 0;
}
