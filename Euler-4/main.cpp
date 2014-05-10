#include <iostream>
#include <sstream>
#include<string>
#include <stdio.h>
#include <string.h>

using namespace std;

string intToString (int Number )
  {
     ostringstream ss;
     ss << Number;
     return ss.str();
  }

bool isPalindrome(int p)
{
    std::string p_str = intToString(p), r;
    if (p_str == string(p_str.rbegin(), p_str.rend())) {
        return true;
    }   else    {
    return false;
    }
}


int main()
{
    int product, highest = 0;
    for (int x = 999; x > 0; x--)   {
        for (int y = 999; y > 0; y--)   {
            product = x * y;
            if (isPalindrome(product))  {
                if (product > highest)  {
                    highest = product;
                }
            }
        }
    }
    cout << highest;
    return 0;
}
