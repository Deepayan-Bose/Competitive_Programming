#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,key;

	cin >> n;

	int a[1000];
	for(int i=0;i<n;i++) cin >> a[i];

	//Ask for the element we want to search
	cout << "Enter the element you want to search : ";
	cin >> key;

	//Find out the index of that element by traversing the array

	for(int i=0;i<n;i++) if (a[i]==key){
		cout <<key << " found at " <<  i<< " index";return 0;
	}
	cout << "Key not found";
	return 0;
	
}

