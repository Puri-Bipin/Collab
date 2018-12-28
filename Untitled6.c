#include<stdio.h>
void main()
{
    char a,t,x,c;
    printf("Enter your degree?('b'for bachelors and 'i'for intermidiate)");
    scanf("%c",&a);
    scanf("%c",&t);
    printf("Are you 18 years old or above?(y or n)");
    scanf("%c",&x);
    scanf("%c",&t);
    if(a=='b' && x=='y')
    {
        printf("You are eligible for exam.");
    }
    else if(a=='i'&&x=='y')
    {
        printf("Do you have 5 years or above expirence)(y or n)");
        scanf("%c",&c);
        if (c=='y')
        {
            printf("you are eligible for exam");
        }
        else if (c=='n')
        {
            printf("you are not eligible");
        }
    }
    else
    {
        printf("not eligible");
    }
}
