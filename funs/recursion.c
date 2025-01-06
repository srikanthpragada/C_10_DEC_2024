


void reverse(int n)
{
    if(n >= 1)
    {
        printf("%d ", n);
        reverse(n - 1);
    }
}


void main()
{

  reverse(5);

}
