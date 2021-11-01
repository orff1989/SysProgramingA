#include <stdio.h>
#include <math.h>

int isPrime(int num){
    if (num<=1) return 0;
    
double sq = sqrt(num);
for (int i = 2; i <= sq; i++){
    if (num%i==0) return 0;
    }

    return 1;
}

int factorial(int n){
    if(n==1 || n==0) return 1;
    int sum=1;
    while (n>1)
    {
        sum=sum*n;
        n--;
    }
    return sum;
}

int isStrong(int num){
int n=num;
int digit;
int sum=0;
if(num==0) return 1;
while (n!=0){
    digit=n%10;
    sum+=factorial(digit);
    n=n/10;
}
 if(sum==num) return 1;
 else return 0;
} 

