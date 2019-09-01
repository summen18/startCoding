#include <iostream>

using namespace std;

const int Max = 20;

int fill_array(double ar[],int limit);
void show_array(const double ar[], int n);
void revalue(double arr,double ar[],int n);

int main()
{
    double properties[Max];
    double factor;

    int size = fill_array(properties,Max);
    cout<<"size: "<<size<<endl;
    cout<<"enter the factor: ";
    cin>>factor;
    revalue(factor,properties,size);

    show_array(properties,size);
}

int fill_array(double ar[], int limit)
{
    double temp;
    int i;
    for ( i = 0; i < limit; i++)
    {
        cout<<"Enter the value #:";
        cin>>temp;
        //非法情况
        if (!cin)
        {
            cin.clear();
            while (cin.get()!='\n')
            {
                continue;
            }
            cout<<"Bad input: input process terminated"<<endl;
            break;
        }
        else if (temp<0)
        {
            break;
        }
        ar[i] = temp;
    }
    return i;
}

void show_array(const double ar[],int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
    {
        cout<<"Property #"<<(i+1)<<" :$";
        cout<<ar[i]<<endl;
    }
}

void revalue(double r, double ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        ar[i] *= r;
    }
}