#include <iostream>

using namespace std;

int main()
{
    int n;
    for(int i=0;i>=0;i++)
    {
        cin >> n;
        if(n>=0&&n%5==0)
            cout << n/5 << endl;
        else if(n==-1)
            break;
        else
            continue;
    }
}
