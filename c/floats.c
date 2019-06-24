//using floats in math operations

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //prompt user for x
    float x = get_float ("x: ");
    
    //prompt user for y
    float y = get_float ("y: ");
        
        
    printf("x / y, %.7f\n", x / y);//add .7 to get 7 decimal places
 
}
