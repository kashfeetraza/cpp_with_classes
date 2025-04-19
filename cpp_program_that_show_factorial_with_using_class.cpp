/*today we create a cpp program that show factorial of number
we use class in this program*/

#include <iostream>
using namespace std;

class fac
{

public:
    int factorial(int n)
    {
        if (n == 0 || n == 1)
        {
            return 1;
        }
        return n * factorial(n - 1);
    }
};

int main()
{
    int n;
    fac facto;

    cout << "Enter the number that you want to find factorial :";
    cin >> n;

    cout << "The factorial of the number " << n << " is " << facto.factorial(n);
    return 0;
}