#include <iostream>
#include <math.h>

using namespace std;

bool isPythagorianTriplet(int a, int b, int c)
{
    if (a * a + b * b == c * c) {
        return true;
    } else {
        return false;
    }
}


int main()
{
    int a, b, c;
    float cf, r;

    for (a = 0; a < 1000; a++) {
        for (b = a + 1; b < 1000; b++) {
            cf = sqrt((a * a )+ (b * b));
            c = (int) sqrt((a * a )+ (b * b));
            r = cf - c;
            if (r == 0) {
                if (a + b + c == 1000) {
                    cout << (a * b * c) << endl;
                }
            }
        }
    }
    return 0;
}
