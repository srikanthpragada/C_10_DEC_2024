#include <stdio.h>

struct rectangle{
    int length, width;
};


void main(){
    struct rectangle shapes[5];
    int i, area;

    srand(time(0));

    for(i = 0; i < 5; i ++)
    {
        shapes[i].length = rand() % 50;
        shapes[i].width = rand() % 50;

        area = shapes[i].length * shapes[i].width;

        printf("%3d X %3d = %5d\n", shapes[i].length, shapes[i].width, area);
    }

}
