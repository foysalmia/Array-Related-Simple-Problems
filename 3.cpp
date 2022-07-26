#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int a[n];
    cout<<"Enter elements to the array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];

    }

    cout<<"Reversed array is : ";
    for(int i=n-1;i>=0;i--){
        cout<<a[i]<<" ";

    }

    cout<<endl;

    return 0;
}
