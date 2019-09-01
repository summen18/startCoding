#include <iostream>

using namespace std;

int main()
{
    double * pvalue = NULL;
    if (!(pvalue = new double))
    {
        cout<<"Error: out of memory. "<<endl;
        exit(1);
    }
    
    // pvalue = new double;

    *pvalue = 23123.11;
    cout<<"Value of pvalue :"<<*pvalue<<endl;
    delete pvalue;
    return 0;
}