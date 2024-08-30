#include <stdio.h>

int main()
{
    int length, breadth;
    printf("enter the value of length\n");
    scanf("%d", &length);
    printf("enter the value of breadth\n");
    scanf("%d", &breadth);
    int area = length * breadth;
    printf("the area of rectangle is:%d", area);

    return 0;
}