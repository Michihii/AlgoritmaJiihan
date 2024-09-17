#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int bilangan;

    int temp = 0;
    scanf("%d", &bilangan);
    int n[bilangan];

    for (int i = 0; i < bilangan; i++)
    {
        scanf("%d", &n[i]);
    }
    for (int i = 0; i < bilangan - 1; i++)
    {
        for (int j = 0; j < bilangan - i - 1; j++)
        {
            if (n[j + 1] > n[j])
            {
                temp = n[j + 1];
                n[j + 1] = n[j];
                n[j] = temp;
            }
        }
    }
    for (int i = bilangan - 1; i >= 0; i--)
    {
        printf("%d\n", n[i]);
    }

    return 0;
}
