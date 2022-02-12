#include<stdio.h> 

int main(){
    int a,b,r;
    printf("1.Addition,2.Subtraction,3.Multiplication,4.Division,5.Modulus\n");
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    printf("Enter your choice\n");
    scanf("%d", &r);
    switch (r)
    {
    case 1:
        printf("Sum of %d and %d is: %d", a, b, a+b);
        break;
        
    case 2:
        printf("Subtraction of %d and %d is: %d", a, b, a-b);
        break;
        
    case 3:
        printf("Multiplication of %d and %d is: %d", a, b, a * b);
        break;
        
    case 4:
        printf("Division of %d and %d is: %d", a, b, a/b);
        break;
        
    case 5:
        printf("Modulus of %d and %d is: %d", a, b, a % b);
        break;
    
    default:
    printf("invalid operation\n");
    }
    return 0;
}