//Factorial Calculation Write a program to calculate the factorial of a given number.

#include <stdio.h>

int main(){
    int n,fact =1;
    int i=1;
    printf("Enter the number : \n");
    scanf("%d",&n);
    if(n==0||n==1){
        printf("factorial = 1");
    }
    else{  
    while (i<=n)
    {
        fact = fact*i;
        i++;
    }
    }
    printf("factorial of %d is %d\n",n,fact);
    return 0;
    
}