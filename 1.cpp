#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cout<<"Enter the size of array : " ;
    cin>>n;
    int sum = 0;
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        sum += a;
    }

    cout<<"Total sum of array is : "<<sum<<endl;

    return 0;
}
