#include <stdio.h>
#include <math.h>
int main()
{
    int p,r,t;
    float s,c;
    printf("Principal: ");
    scanf("%d",&p);
    printf("\nRate of interest: ");
    scanf("%d",&r);
    printf("\nTime: ");
    scanf("%d",&t);
    s=(p*r*t)/100.0;
    printf("Simple interest: %f\n",s);
    c=p*pow(1+(r/100.0),t)-p;
    printf("Compound interest: %f",c);
    return 0;
}

