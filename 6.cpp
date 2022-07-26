#include<bits/stdc++.h>

using namespace std;

int main(){
    int x,y;

    cout<<"Enter First array size : ";
    cin>>x;
    int a[x];
    cout<<"Enter First array elements : ";
    for(int i=0;i<x;i++){
        cin>>a[i];
    }

    cout<<"Enter Second array size : ";
    cin>>y;
    int b[y];
    cout<<"Enter Second array elements : ";
    for(int i=0;i<y;i++){
        cin>>b[i];
    }

    bool isFound = false;

    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(a[i] == b[j]){
                isFound = true;
                cout<<a[i] <<" ";
            }
        }
    }

    if(!isFound){
        cout<<"Empty set"<<endl;
        return 0;
    }

    return 0;
}
