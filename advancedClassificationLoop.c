#include <stdio.h>

int isPalindrome(int num){
int rem, copyNum=num, sum=0;
while (copyNum>0)
{
    rem=copyNum%10;
    sum=sum*10+rem;
    copyNum=copyNum/10;
}
if (sum==num) return 1;
else return 0;
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

