#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    if (t < 0 && t < 100)
    {
        return 1;
    }
    for (int i = 0; i < t; i++)
    {
        /* code */

        int n;
        scanf("%d", &n);
        int arr1[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr1[i]);
        }
        int arr2[n];
        for (int i =0; i < n; i++)
        {
            /* code */
            arr2[i] = arr1[i];
        }
    //sorting to ascending order of arr2
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr2[i] > arr2[j])
            {
                int temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        }
    }


        int arr3[n];
        for (int i = 0; i < n; i++)
        {
            arr3[i] = abs(arr1[i] - arr2[i]);
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr3[i]);
        }
        printf("\n");
    }
    return 0;
}
