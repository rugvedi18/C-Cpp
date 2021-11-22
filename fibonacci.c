// fibonacci series 
#include<stdio.h>

int main()
{
    int n1=0, n2=1, n3, num;
    
    printf("How many numbers you want:");
    scanf("%d",&num);
    printf("Answer is:- %d %d ",n1,n2);

    for(int i=0;i<num-2;i++){
        n3 = n1 + n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }
    printf("\n");
}