#include <stdio.h>
int main()
{
    int n, originalNumber, remainder, result = 0;
    scanf("%d", &n);

    originalNumber = n;

    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;
        originalNumber /= 10;
    }

    if(result == n)
        printf("yes");
    else
        printf("no");

    return 0;
}
