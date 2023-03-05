#include <iostream>
using namespace std;
long long guassiansum(long long n);
int usingloops(int n);
int usingrecursion(int n);
int main()
{
    long long a;
    cout << "enter the number you want to add till : ";
    cin >> a;

    cout << guassiansum(a) << "\n";
    cout << usingloops(a) << "\n";
    cout << usingrecursion(a) << "\n";

    return 0;
}

long long guassiansum(long long n)
{
    // Calculates sum of n natural numbers using Guassian Summation n * (n+1)/2
    return ((n * (n + 1)) / 2);
}
int usingloops(int n)
{
    int answer = 0;
    for (int i = 0; i <= n; i++)
    {
        answer = answer + i;
    }
    return answer;
}
int usingrecursion(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (usingrecursion(n - 1) + n);
    }
}
