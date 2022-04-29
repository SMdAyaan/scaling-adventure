
#include <stdio.h>

int main()
{
   int val1,val2;
int sum,sub,mult,mod;
float div;
scanf("%d",&val1);
scanf("%d",&val2);
sum=val1+val2;
sub=val1-val2;
div=(float)val1/(float)val2;
mult=val1*val2;
mod=val1%val2;
printf("\nAddition : %d",sum);
printf("\nSubtraction : %d",sub);
printf("\nMultiplication : %d",mult);
printf("\nDivision : %0.3f",div);
printf("\nModulus : %d",mod);

}
