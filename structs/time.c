#include <stdio.h>

struct time
{
     int h, m, s;
};

void print(struct time t)
{
    printf("%02d:%02d:%02d", t.h, t.m, t.s);
}

void reset(struct time * p)
{
    p->h = p->m = p->s = 0;
}

int totalseconds(struct time t)
{
    return t.h * 3600 + t.m * 60 + t.s;
}

struct time max(struct time t1, struct time t2)
{
    return totalseconds(t1) > totalseconds(t2) ? t1 : t2;
}

void main()
{
    struct time t1 = {10,20,5};
    struct time t2 = {1, 2, 3};
    struct time big;

    big = max(t1, t2);

    //print(big);

    reset(&t1);
    print(t1);

}
