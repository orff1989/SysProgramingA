#include<stdio.h>
#include<math.h>

static int sum = 0;
int isPalindrome(int num){
    if(num != 0){
        sum = (sum * 10) + (num % 10); 
        isPalindrome(num / 10); 
    }
    
    else if(sum == num){
        return 1;
    }
    
    return 0;
}

int numLength(int num){
    if(num == 0){
        return 1;
    }
        return 1 + numLength(num/10); 
}

int length = numLength(num);

int isArmsrong(int num){
    int sum;
   int temp = num;
   if(num != 0)
       temp = temp % 10;
       sum += (int) pow(temp, length);
       isArmsrong(num / 10);
   }

   if(sum == num) return 1;
   else return 0;
}
