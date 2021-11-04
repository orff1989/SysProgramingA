#include <stdio.h>
#include <string.h>
#include"basicClassification.c"
#include"advancedClassificationLoop.c"
#include <math.h>
#include<NumClass.h>

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
    
    char primes[num2-num1+2];
    char armstrongs[num2-num1+2];
    char strongs[num2-num1+2];
    char pali[num2-num1+2];
    for (int i = 0; i < num2-num1+2; i++)
    {
    primes[i]=0;
    armstrongs[i]=0;
    strongs[i]=0;
    pali[i]=0;
    }
    
    char space[2]=" "; 
    for (int i = num1; i <= num2; i++){
        char str[20];
        sprintf(str, "%d", i);

    if (isPrime(i)){
       strcat(primes, str);
        strcat(primes, space);
    }
    if (isArmstrong(i)){
        strcat(armstrongs, str);
        strcat(armstrongs, space);
    }
    if (isStrong(i)){
       strcat(strongs, str);
        strcat(strongs, space);
    }
    if (isPalindrome(i)){
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
