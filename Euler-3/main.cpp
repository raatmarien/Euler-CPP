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
    uint64_t factorian = 600851475143;

    for (uint64_t i = 1; i < (uint64_t) (factorian / 2); i++)   {
       if ((factorian % i) == 0)   {
            if (isPrime((uint64_t) (factorian / i))) {
                cout << (factorian / i);
                return 0;
            }
        }
    }

    return 0;
}
