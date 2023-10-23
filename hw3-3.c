#include <stdio.h>
#include <stdlib.h>

int a,b,c,d;
int main()
{
    scanf("%d%d",&a,&b);
    c=(a/1000)+(a/100-(a/1000)*10)+(a/10-(a/100*10))+(a%10);
    d=(b/1000)+(b/100-(b/1000)*10)+(b/10-(b/100*10))+(b%10);
    if(c>d)
        printf("%d\n",b);
    else if(c<d)
        printf("%d\n",a);
    else
        if(a>b)
            printf("%d\n",b);
        else if(a<b)
            printf("%d\n",a);
    return 0;
}
