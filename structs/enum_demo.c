
enum paymentmode {
    CASH = 100,
    UPI = 200,
    CARD = 300
};

struct payment
{
    char customer[30];
    int amount;
    enum paymentmode mode;
};

void main()
{
  enum paymentmode paymode;
  struct payment p = {"Joe", 10000, UPI};


      paymode = CASH;


      if(paymode == UPI)
      {

      }

      printf("%d", paymode);
}
