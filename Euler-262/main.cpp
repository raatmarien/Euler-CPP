#include <iostream>
#include <math.h>

using namespace std;

double f(double x, double precision, double step)
{
    double ans = 0;
    double y = 0; // Arbitrary number
    while(ans < 6556.151335620042 - precision && ans > 6556.151335620042 + precision)
    {
        y +=step;
        ans = ( 5000-0.005*(x*x+y*y+x*y)+12.5*(x+y) ) * pow(2.71828182846, static_cast <double>( -abs(0.000001*(x*x+y*y)-0.0015*(x+y)+0.7) ));
        step = (ans < 6556.151335620042) ? step : -abs(step)/2;
    }
    cout << f(667, 0.001, 100)
}


