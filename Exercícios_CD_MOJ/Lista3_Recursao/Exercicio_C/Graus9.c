#include <stdio.h> 
  
 int main() { 
    while (1) { 
  
        char input[1000]; 
        scanf("%s", &input); 
 
        int sum=0; 
        for (int i=0; i<strlen(input); i++) { 
            sum += input[i] - '0'; 
        } 
        if (sum == 0) { 
            break; 
        } 
        if (sum%9 != 0) { 
            printf("%s is not a multiple of 9.\n", input); 
        } 
        if (sum%9 == 0) { 
            printf("%s is a multiple of 9 and has 9-degree %d.\n", input, degree(sum, 1)); 
        } 
    } 
 } 
  
 int degree(int num, int currentDegree) { 
    if (num < 10){ 
        return currentDegree; 
    } 
    if (num>=10) { 
        return degree(num%10 + (num/10)%10+(num/100)%10+(num/1000)%10, currentDegree+1); 
    } 
 } 
 // 189 
  
 // degree(189) == 1 + degree(27) 
  
 // degree(27) == 1 + degree(9) 
  
 // degree(9) == 1