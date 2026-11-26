#include <iostream>
using namespace std;
unsigned int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 0)
    {
        cout << "Factorial does not exist for negative numbers.";
    }
    else
    {
        cout << "Factorial of " << n << " = " << factorial(n);
    }
    return 0;
}
