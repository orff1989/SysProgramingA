#include <stdio.h>
#include <math.h>



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

int isPrime(int num){
    if (num<=1) return 0;
    
double sq = sqrt(num);

for (int i = 2; i <= sq; i++){
    if (num%i==0) return 0;
    }

    return 1;
}

int main()
{
    int ans = isPrime(4);
   printf("%i",ans);
    return 0;
}