#include <stdio.h>

void convert(int n)
{
    int s = 0, r;
    while (n>0)
    {
        r= n%10;
        s=s*10+r;
        n=n/10;
    }
    n = s;
    while (n>0)
    {
        r = n % 10;
        switch (r)
        {
        case 0:
            printf("zero ");
            break;
        case 1:
            printf("one ");
            break;
        case 2:
            printf("two ");
            break;
        case 3:
            printf("three ");
            break;
        case 4:
            printf("four ");
            break;
        case 5:
            printf("five ");
            break;
        case 6:
            printf("six ");
            break;
        case 7:
            printf("seven ");
            break;
        case 8:
            printf("eight ");
            break;
        case 9:
            printf("nine ");
            break;
        default:
            break;
        }
        n = n / 10;
    }
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    convert(n);
    return 0;
}

