#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n+1];
    arr[0]=n;
    for(int i=1;i<=n;i++)
        cin >> arr[i];
    sort(arr,arr+n+1);
    double mean;
    int count=0;
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum+=arr[i];
        count ++;
    }
    mean=sum/count;
    cout << "Mean :"  << mean << endl;
    cout << "Max :"  << arr[n] << endl;
    cout << "Min :"  << arr[0] ;
}
