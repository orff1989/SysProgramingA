#include <stdio.h>

int main()
{
   printf("%d orrrr",isArmstrong(407));
    return 0;
}



int isArmstrong(int num){
int n =num;
int sum=0;
int digit;
while (n!=0)
{
digit=n%10;
sum+=digit*digit*digit;
n=n/10;
}
if (sum==num) return 1;
else return 0;
}