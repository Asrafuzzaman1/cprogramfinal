#define PERIOD 10
#define PRINCIPAL 5000
int main()
{
    int year;
    float amount,value,inrate;
    amount=PRINCIPAL;
    inrate=.11;bvbbjomkl .09pi;k,/
    year=0;
    while(year<=PERIOD)
    {
        printf("%2d  %8.2f\n",year,amount);
        value=amount+inrate*amount;
        year=year+1;
        amount=value;
    }

return 0;
}
