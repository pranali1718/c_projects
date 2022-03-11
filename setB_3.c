#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main()
{
    unsigned int p_number,rev_number=0,f=1;
    int i;
    bool p_number_bits[4];
    printf("enter number:");
    scanf("%d",&p_number);
    printf("Before\n%d = ",p_number);
    for(i=3;i>=0;i--)
    {
        p_number_bits[i]=(bool)(p_number & f);
        p_number=p_number>>f;
        rev_number=((rev_number<<f)|p_number_bits[i]);
    }
    for(i=0;i<4;i++)
    {
        printf("%d",(int)p_number_bits[i]);
    }
    printf("\n");
    printf("After:\n%d = ",rev_number);
    for(i=0;i<4;i++)
    {
        printf("%d",(int)p_number_bits[3-i]);
        if((i+1)%8==0)
        {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}