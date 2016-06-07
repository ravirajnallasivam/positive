#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n==0)
            printf("zero\n");
        if(n>0)
            printf("positive\n");
        if(n<0)
             printf("negative\n");
    }
        return 0;
}
