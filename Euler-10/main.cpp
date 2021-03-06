#include <iostream>
#include <stdint.h>
#include <vector>

using namespace std;

bool isPrime(int p)
{
    for(int i = 2; i < (int) (p / 2); i++)  {
        if ((p % i) == 0)   {
            return false;
        }
    }
    return true;
}

int64_t getSumOfPrimes64(int64_t allUnder)
{
    int64_t sum = 0;
    std::vector <int64_t> numberArray(allUnder - 2), primeArray(allUnder);
    int64_t c = 0, d = 0, f;
    for (int i = 2; i < allUnder; i++)  {
        numberArray.at(c) = i;
        c++;
    }


    for (int64_t i = 0; i < allUnder - 2; i++) {
        f = numberArray.at(i);
        if (f != 0) {
            for (int x = i + 1; x < allUnder - 2; x++) {
                if (numberArray.at(x) % f == 0) {
                    numberArray.at(x) = 0;
                }
            }
            sum += f;
            //cout << f;
        }
    }
    return sum;
}


long getSumOfPrimes(long allUnder)
{
    long sum = 0;
    long numberArray[allUnder - 2], c = 0, d = 0, f, primeArray[allUnder];
    for (long i = 2; i < allUnder; i++)  {
        numberArray[c] = i;

        c++;
    }

    for (long i = 0; i < allUnder - 2; i++) {
        f = numberArray[i];
        if (f != -1) {
            for (long x = i + 1; x < allUnder - 2; x++) {
                if (numberArray[x] % f == 0) {
                    numberArray[x] = -1;
                }
            }
            sum += f;
            //cout << f << endl;
        }
    }
    return sum;
}

int main()
{
    long allUnder = 2000000;
    uint64_t sum = getSumOfPrimes64(allUnder);
    cout << sum;
    return 0;
}
