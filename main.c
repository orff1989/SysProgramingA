#include <stdio.h>
#include <string.h>
#include"basicClassification.c"
#include"advancedClassificationLoop.c"
#include <math.h>

int main()
{
    int num1, num2;
    printf("enter first number: \n");
        scanf("%i", &num1);

    printf("enter second number: \n");
        scanf("%i", &num2);

    if(num1>num2){
        int t=num1;
        num1=num2;
        num2=t;
    }
    
    char primes[num2-num1+20];
    char armstrongs[num2-num1+20];
    char strongs[num2-num1+20];
    char pali[num2-num1+20];
    
    int j1=0, j2=0,j3=0,j4=0;
    char space[2]=" "; 
    
    for (int i = num1; i <= num2; i++){
        char str[20];
        sprintf(str, "%d", i);

    if (isPrime(i)==1){
       strcat(primes, str);
        strcat(primes, space);
    }
    if (isArmstrong(i)==1){
        strcat(armstrongs, str);
        strcat(armstrongs, space);
    }
    if (isStrong(i)==1){
       strcat(strongs, str);
        strcat(strongs, space);
    }
    if (isPalindrome(i)==1){
        strcat(pali, str);
        strcat(pali, space);
    }
    }
    printf("Prime numbers: %s \n",primes);
    printf("Armstrong numbers: %s\n",armstrongs);
    printf("Strong numbers: %s \n",strongs);
    printf("palindrome numbers: %s \n",pali);
    
    return 0;
}
