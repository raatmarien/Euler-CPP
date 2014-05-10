#include <iostream>

using namespace std;

int main()
{
    int pprevious = 1, previous = 1, current = 0, sum = 0;

    while (current < 4000000)   {
        if ((current % 2) == 0) {
            sum += current;
        }
        current = previous + pprevious;
        pprevious = previous;
        previous = current;
    }
    cout << sum;
    return 0;
}
