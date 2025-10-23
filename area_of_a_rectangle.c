#include<stdio.h> 
int main() {

int repeat;
do{
    float length ;
    float breadth ;
    printf("Enter the length of the rectangle \n") ;
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle \n") ;
    scanf("%f", &breadth);
    float area = length * breadth ;
    printf("The area of the rectangle is %f \n", area);
    printf("Do you want to calculate the area again? Then press '1' for yes and '0' for no");
    scanf("%d", &repeat);
}while(repeat==1);
printf("*******Thankyou for using the programme********");
    return 0 ; 
}