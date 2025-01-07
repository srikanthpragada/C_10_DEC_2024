
void reverse(int n)
{
    if(n >= 1)
    {
        printf("%d ", n);
        reverse(n - 1);   // recursion
    }
}


void reverse2(int n)
{
    if(n == 0)
        return;

    printf("%d ", n);
    reverse(n - 1);      // recursion
}


void main()
{

  reverse(5);

}
