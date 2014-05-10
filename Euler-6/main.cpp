#include <iostream>

using namespace std;

int main()
{
    int sum = 0, sum_of_squares = 0, square_of_sum = 0;

    for (int i = 1; i < 101; i++)   {
        sum += i;
        sum_of_squares += (i * i);
    }
    square_of_sum = sum * sum;
    cout << (square_of_sum - sum_of_squares);

    return 0;
}
