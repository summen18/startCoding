#include <iostream>

using namespace std;

struct travel_time
{
    int hour;
    int minute;
};
const int Mins_per_hr = 60;

travel_time sum (travel_time t1, travel_time t2);
void show_time(travel_time t);

int main()
{ 
    travel_time t1 = {5,45};
    travel_time t2 = {4,55};
    travel_time trip = sum(t1,t2);
    cout<<"Two-day total :";
    show_time(trip);

    travel_time t3 = {3,45};
    travel_time trip3 = sum(trip,t3);
    cout<<"Three-day total :";
    show_time(trip3);
    return 0;
}
travel_time sum (travel_time t1, travel_time t2)
{
    travel_time total;
    total.minute = (t1.minute+t2.minute)%Mins_per_hr;
    total.hour = (t1.hour+t2.hour)+(t1.minute+t2.minute)/Mins_per_hr;
    return total;
}

void show_time(travel_time t)
{
    cout<<t.hour<<" hour, "<<t.minute<<" minutes\n";
}
