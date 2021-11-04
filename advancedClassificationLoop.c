#include<stdio.h>
#include<math.h>

int isPalindrome(int num){
    int rem, copyNum=num, sum=0;
    while (copyNum > 0){
        rem = copyNum%10;
        sum = (sum*10) + rem;
        copyNum = copyNum/10;
        }
        
        if (sum == num){
            return 1;
        } 
    return 0;
}

int numLength(int num){
    int counter = 0;
    while(num > 0){
        num = num /10;
        counter++;
    }
    return counter;
}

int isArmstrong(int num){
    int length = numLength(num);
    int sum;
    int temp = num;
    while (temp > 0){
       temp = temp % 10;
       sum += (int) pow(temp, length);
   }

   if(sum == num) {
       return 1;
   }
   return 0;
}

