//Just 1 min 12 sec for all primes till 2 million
//  :3
//  Yay

#include <vector>
#include <stdio.h>
#include <iostream>

using namespace std;

vector<unsigned int> primes;
unsigned int sum=0;


void calc_primes(vector<unsigned int>& primes, const unsigned int max)
{
    if (max < 2){
        return;
    }
    primes.push_back(2);

    for (unsigned int number = 3; number < MAX; number += 2)  {
        bool  is_prime(true);
        for (unsigned int index = 0;
            index < primes.size();
            ++index)
        {
            if ((number % primes[index]) == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
        {
            primes.push_back(number);
        }
    }
    return;
}

int main()
{
    calc_primes(primes, 2000000);
    return 0;
}
