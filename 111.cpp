#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i = 200;
    cout<<i<<"at"<<&i<<endl;

    int *p = &i;
    cout<<*p<<"at"<<p<<endl;

    char *q="dsajf lkjasf";
    cout<<q<<"  at  "<<*q<<endl;

    string str1 = "sdf jshdfk ao";
    cout<<str1<<endl;

    string str2;
    cin>>str2;
    cout<<str2[2]<<endl;
}