#include <stdio.h>
#include <math.h>
void main()
{
    int a[100],b,n,i,oper,in=1;
    float c;
    printf("\t\t\t\t\t\tCalculator\n");
    printf("\t\t**-------------------------------------------------------------------------**\n");
    printf("Enter How many number to be calculated in the operation(<100):");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter Number%d : ",i+1);
        scanf("%d",&a[i]);
    }
    operat:
            printf("Enter a Operator to be performed (1='+',2='-',3='*',4='/'): ");
    scanf("%d",&oper);
    if((n>2)&&(oper==2 ||oper==4)){
        printf("!!For subtraction and division please enter two numbers!!\n");
        goto operat;
    }
    switch (oper)
    {
        case 1 :
            b=0;
            for(i=0;i<n;i++)
            {
                b+=a[i];
            }
            printf("The sum is %d", b);
            break;
        case 2:
            b=0;
            for (i=0;i<n;i++)
            {
                b-=a[i];
                if(i==0)
                    b*=(-1);
            }
            printf("The difference is %d", b);
            break;
        case 3 :
            b=1;
            for(i=0;i<n;i++)
            {
                b*=a[i];
            }
            printf("The product is %d", b);
            break;
        case 4:
            c=a[1]/a[0];
            printf("The Division is %d",c);
            break;
        default:
            printf("Error");
    }
}
