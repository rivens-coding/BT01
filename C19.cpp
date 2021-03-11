#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    bool d =true;
    if((a<b&&b<c)||(a>b&&b>c))
        d=true;
    else
        d=false;
    cout << d;
}
