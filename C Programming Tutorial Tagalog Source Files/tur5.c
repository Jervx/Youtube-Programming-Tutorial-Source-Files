#include <stdio.h>

int main(){

    //example 1
    int var1;
    
    printf("Enter A Number: ");
    scanf("%d",&var1);
    
    printf("The Number You Entered is %d",var1);
    
    
    //example 2
        
    char name[10];
    
    printf("\nEnter Your Name: ");
    scanf("%c",&name);

    printf("Your name is %s",name);
    
    
    //example 3
    float payment;
    printf("\nEnter Your Payment: ");
    scanf("%f",&payment);
}
