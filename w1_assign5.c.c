#include<stdio.h> 

int main(){
    int r;
    float pi=3.14;

    printf("Radious of a circle %d\n",r);
    scanf("%d", &r);
    printf("Dimeter of this circle is %d\n",2*r);
    printf("Circumference of this circle is %f\n",2*pi*r);
    printf("Area of this circle is %f\n",pi*r*r);



    return 0;
}