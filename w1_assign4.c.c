/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include<stdio.h> 

int main(){
    int n;
    int a,b;
    printf("enter 2 number:\n");
    scanf("%d %d" ,&a,&b);
    printf("here are some arithmetic operation:1.addition,2.subtraction,3.multiplication,4.devision");
    printf("choose the  operation you want to:");
    scanf("%d",&n);

    switch(n){
        case 1:
            printf("%d+%d=%d",a,b,a+b);
            break;
         case 2:
            printf("%d-%d=%d",a,b,a-b);
            break;
         case 3:
            printf("%d*%d=%d",a,b,a*b);
            break;
         case 4:
            printf("%d/%d=%d",a,b,a/b);
            break;
        
    }


   
    return 0;
}

