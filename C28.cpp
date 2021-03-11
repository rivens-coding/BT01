#include <iostream>

using namespace std;

int main()
{
    int hours=12;
    string time="midnight";
    int check=1;
    cout << hours << ' ' << time << endl;
    for(int i=0;i<23;i++)
    {
        hours ++;
        if(hours>12)
        {
            hours=1;
        }
        check++;
        if(hours==12)
            time="noon";
        if(hours<12&check==1)
        {
            time="am";
        }
        if(hours<12&check>1)
        {
            time="pm";
        }
        cout << hours << ' ' << time << endl;
    }
}
