#include <iostream>
#include <stdint.h>

using namespace std;

bool isPrime(uint64_t p)
{
    for(uint64_t i = 2; i < (uint64_t) (p / 2); i++)  {
        if ((p % i) == 0)   {
            return false;
        }
    }
    return true;
}

int main()
{
    int counter = 0;
    for (int i = 2; true; i++)  {
        if (isPrime(i)) {
            if (counter == 10001) {
                cout << i;
                return 0;
            }
            counter++;
        }
    }
    return 0;
}
