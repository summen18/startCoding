#include <iostream>
using namespace std;

unsigned long left(unsigned long num, unsigned ct);
char * left(const char *str,int n =1);

int main()
{
    char * trip = "Hawaii! ";
    unsigned long n = 12345678;
    int i;
    char * temp;

    for (i = 1 ; i < 10; i++)
    {
        cout<<left(n,i)<<endl;
        temp = left(trip,i);
        cout<<temp<<endl;
        
    }
}

unsigned long left(unsigned long num, unsigned ct)
{
    unsigned digits = 1;
    unsigned long n = num;

    if (ct == 0||num==0))
    {
        return 0;
    }
    while (n/=10)
    {
        digits++;
    }
    
    
}
