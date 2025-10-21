#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int x;
    int mnVal = 100000+5;
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &x);
        if(x<0){
            x *= -1;
        }

        if (x < mnVal) {
            mnVal = x;
        }

    }

    printf("%d", mnVal);
}