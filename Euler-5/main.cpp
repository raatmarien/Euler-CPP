#include <iostream>

using namespace std;

bool qualifies(int n)
{
    for (int i = 1; i < 21; i++)    {
        if ((n % i) != 0)   {
            return false;
        }
    }
    return true;
}

int main()
{
    for (int i = 20; true; i++) {
        if (qualifies(i))   {
            cout << i;
            return 0;
        }
    }
    return 0;
}
