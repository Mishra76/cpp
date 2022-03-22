#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int sum_of_digit(long long n)
{
  int sum = 0;
  while (n > 0)
  {
    sum += (n % 10);
    n = n / 10;
  }
  return sum;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long n;
    cin >> n;
    int sum = sum_of_digit(n);
    int digit = (((sum / 9) + 1) * 9) - sum;

    int result = n * 10 + digit;
    cout << result << endl;
  }
  return 0;
}