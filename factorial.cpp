#include <iostream>

using namespace std;

int factorial(int num)
{
    int fact = 1;
    while (num > 1)
    {
        fact *= num;
        num--;
    }
    return fact;
}

int main()
{
    int num;
    cout << "Enter any number:" << endl;
    cin >> num;
    cout<<"Factorial of "<<num<<" is:"<< factorial(num)<<endl;

    return 0;
}