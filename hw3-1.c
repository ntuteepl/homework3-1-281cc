#include <stdio.h>
#include <stdlib.h>

int is_prime(int);
int n,i;
int main(int argc,char *argv[])
{
    scanf("%d",&n);
    if(is_prime(n)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}

int is_prime(int n){
    if(n==1)
       return 0;
    else if(n==2)
       return 0;
    else{
        for(i=2;i<n;i++){
            if(n%i==0){
                return 0;
            }
        }
    }
    return 1;
}
