#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch,a,b,di;
    printf("1. ADDITION \n 2. SUBSTRACTION\n 3. MULTIPLICATION\n 4. DIVISION\n");
    printf("Enter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("Enter the numbers to be added\n");
        scanf("%d %d",&a,&b);
        int s= a+b;
        printf("The sum of two numbers is=%d",s);
        break;
    case 2:
        printf("Enter the numbers to be substracted\n");
        scanf("%d %d",&a,&b);
        if(a>b)
        {
             di= a-b;
        }
        else
            di= b-a;
          printf("The difference of two numbers is=%d",di);
          break;
    case 3:
        printf("Enter the numbers to be multiplied\n");
        scanf("%d %d",&a,&b);
        int p= a*b;
        printf("The product of two numbers is=%d",p);
        break;
    case 4:
        printf("Enter the numbers to be divided\n");
        scanf("%d %d",&a,&b);
        int r= a%b;
        int div= a/b;
        if(r==0)
            printf("%d is divisible by %d by %d",a,b,div);
         else
         printf("%d on dividing with %d gives remainder %d and divisior %d",a,b,r,div);
        break;
}
    return 0;
}
