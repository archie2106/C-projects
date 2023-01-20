#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
       cin>>arr[i];
    }
     int maxNo=INT_MIN;
     int minNo=INT_MAX;

     for (int i = 0; i <n; i++)
     {
        maxNo= max(maxNo, arr[i]);
        minNo= min(minNo, arr[i]);
     }
      cout<<"MAXIMUN NO. IN ARRAY = "<<maxNo<<endl;
      cout<<"MINIMUM NO. IN ARRAY = "<<minNo<<endl;
    return 0;
    
}