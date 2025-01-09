#include <stdio.h>

struct rectangle{
    int length, width;
};


void main(){
    struct rectangle r;
    int area, circumference;

    printf("Enter length:");
    scanf("%d",&r.length);

    printf("Enter width:");
    scanf("%d",&r.width);

    area = r.length * r.width;
    circumference = 2 * (r.length + r.width);

    printf("Area :%d, Circumference : %d",area,circumference);
}
