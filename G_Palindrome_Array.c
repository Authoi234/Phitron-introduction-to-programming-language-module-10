#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int i = 0;
    int j = n - 1;
    int isPa = 0;
    while (i < j)
    {
        if (a[i] != a[j]){
            isPa = 1;
            printf("NO");
            break;
        } else{
            i++;
            j--;
        }
    }
    if (isPa == 0){
        printf("YES");
    }
    return 0;
}