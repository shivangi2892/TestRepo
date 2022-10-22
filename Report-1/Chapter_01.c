#include<stdio.h>
main()
{
    int n,sum=0;
     do
     {
         printf("Enter number");
         scanf("%d",&n);
         sum+=n;
     }while(sum<=100);
    
    printf("Sum is %d",sum);

}
