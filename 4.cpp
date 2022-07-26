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

     int maximum = a[0] ,minimum = a[0] ,maxIndex = 0,minIndex = 0;

     for(int i=0;i<n;i++){
        if(a[i]>maximum){
            maximum = a[i];
            maxIndex = i;
        }
        if(a[i]<minimum){
            minimum = a[i];
            minIndex = i;
        }
     };

     cout<<"Max : "<<maximum<<", Index : "<<maxIndex<<endl;
     cout<<"Min : "<<minimum<<", Index : "<<minIndex<<endl;
    return 0;
}
