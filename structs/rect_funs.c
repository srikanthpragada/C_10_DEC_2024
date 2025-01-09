#include <stdio.h>

struct rectangle{
    int length, width;
};

int area(struct rectangle r)
{
    return r.length * r.width;
}

struct rectangle max(struct rectangle r1, struct rectangle r2)
{
    if (area(r1) > area(r2))
         return r1;
    else
         return r2;
}


int equals(struct rectangle  r1, struct rectangle r2)
{
    return r1.length == r2.length && r1.width == r2.width;
}

void print(struct rectangle r)
{
    printf("Length : %d, Width : %d", r.length, r.width);
}

void main()
{
  struct rectangle r1 = {20, 20};
  struct rectangle r2 = {10, 25};

  struct rectangle r3;

    print(r1);

    printf("\n%d\n", equals(r1, r2));

    r3 = max(r1, r2);

    print(r3);

}
