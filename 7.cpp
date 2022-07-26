
#include<bits/stdc++.h>

using  namespace std;

int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int a[n];
    cout<<"Enter elements to the array : ";
    for (int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%3==0){
            a[i] = -1;
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
