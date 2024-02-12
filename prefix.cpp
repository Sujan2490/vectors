#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
bool divide(vector<int>arr)
{
    int prefix=0,total_sum=0,n=arr.size();
    for(int i=0;i<n;i++)
    {
        total_sum+=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        prefix+=arr[i];
        int ans=total_sum-prefix;
        if(ans==prefix)
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    cout<<"enter the size of vector"<<endl;
    cin>>n;
    vector<int>v(n);
    cout<<"enter the elements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<"the elements which you have given are:"<<endl;
    for(int i =0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<divide(v);
}