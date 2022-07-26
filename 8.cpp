
#include <bits/stdc++.h>

using namespace std;

void remove_duplicates(int* arr, int& n) {

	vector<int> temp;

	for (int i = 0; i < n; ++i) {
		int flag = 1;
		for (int j = 0; j < i; ++j) {
			if (arr[j] == arr[i]) {
				flag = 0;
				break;
			}
		}

		if (flag)
			temp.push_back(arr[i]);

	}

	n = temp.size();
	for (int i = 0; i < n; ++i)
		arr[i] = temp[i];

}


int main()
{
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements to the array : ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    remove_duplicates(arr,n);


    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
