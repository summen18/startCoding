#include <iostream>
#include <cmath>

using namespace std;

inline double square(double x){return x*x;}

int main()
{
    double a,b;
    double c = 13.0;

    a = square(5.0);
    b = square(4.5+7.5);

    cout<<"a: "<<a<<" b;"<<b<<endl;

    return 0;

}