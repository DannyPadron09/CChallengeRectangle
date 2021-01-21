#include <stdio.h>
int main () 
{
    //declare the variables
    int width = 30;
    int height = 60;
    int perimeter = 0;
    int area = 0;

    //perimeter calculation
    perimeter = 2 * (height + width);
    area = width * height;

    //display 
    printf("Width is: %i\n", width);
    printf("Height is: %i\n", height);
    printf("Perimeter is: %i\n", perimeter);
    printf("Area is: %i\n", area);

    return 0;
}