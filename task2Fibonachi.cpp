#include <iostream>
#include <cmath>
using namespace std;

int memberOfFibonacci(int n);
int sumOfFibonacci(int n);

int main()
{
    int n = 0;
    cout << "Hello! Please, enter the number of Fibonacci member";
    cin >> n;
    cout << "memberOfFibonacci N " << n << "is:" << memberOfFibonacci(n) << endl;
    cout << "sumOfFibonacci = " << sumOfFibonacci(n) << endl;

    for (int i = 0; i < 10; i++)
    {
        n = memberOfFibonacci(i);
        cout << "[" << i << "]  " << n << "\n";
    }
    return 0;

}
int memberOfFibonacci(int n)
{
    int a = 0;
    int b = 1;
    int tmp;
    for (int i = 0; i < n; i++)
    {
        tmp = a;
        a = b;
        b += tmp;
    }
    return a;
}
int sumOfFibonacci(int n)
{
    int a = 0;
    int b = 1;
    int tmp;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        tmp = a;
        a = b;
        b += tmp;
        sum += a;
    }
    return sum;
}
/*int memberOfFibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}*/
