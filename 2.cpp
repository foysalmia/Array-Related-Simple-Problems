#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int a[n],sum = 0;
    cout<<"Enter elements to the array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i%2 == 0){
            sum += a[i];
        }
    }

    cout<<"Even indexed positions sum : " <<sum<<endl;


    return 0;
}
