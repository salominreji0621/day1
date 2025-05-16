#include <stdio.h>

int main()
{
    int length,width,area,perimeter;
    printf("Enter length of the rectangle:");
    scanf("%d",&length);
    printf("Enter width of the rectangle:");
    scanf("%d",&width);
    area = length * width;
    perimeter = 2*(length + width);
    printf("area = %d\n",area);
    printf("perimeter = %d\n",perimeter);
    return 0;
}

   
