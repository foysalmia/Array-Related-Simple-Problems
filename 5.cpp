#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter values to the array : "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int value,index[n];
    memset(index,-1,sizeof(index));
    cout<<"Enter the value do you want search : ";
    cin>>value;
    bool flag = false;
    for(int i=0; i<n; i++)
    {
        if(value == arr[i])
        {
            index[i] = i;
            flag = true;
        }
    }
    if(!flag)
    {
        cout<<"NOT FOUND ."<<endl;
        return 0;
    }

    cout<<"FOUND at index position :";
    for(int i=0; i<n; i++)
    {
        if(index[i] != -1)
        {
            cout<<" "<<index[i];
            if(i != n-1)
            {
                cout<<",";
            }
        }
    }



    return 0;
}
