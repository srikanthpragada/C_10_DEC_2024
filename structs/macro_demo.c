
// MACRO
#define  iseven(n)  n % 2 == 0
#define  next_even(n)  n % 2 == 0 ? n + 2 : n + 1

void main()
{
 int v = 100;

    printf("%d ", iseven(v));     //  printf("%d", v % 2 == 0)
    printf("%d ", next_even(v));  //  printf("%d", v % 2 == 0 ? v + 2 : v + 1)


}
