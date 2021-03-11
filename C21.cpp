#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int s,area;
    s = (a + b + c) / 2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout << area;
}

