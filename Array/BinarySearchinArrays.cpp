//Binary Search : Applicable in Sorted Array only
//Time Complexity: O(logbase2 n)
#include <iostream>
#include <climits>
using namespace std;
int binary_search(int a[],int n,int key){ // Assumption : all elements are unique 
	int s=0,e=n-1;
	int mid;
	while(s<=e){
		mid=s+(e-s)/2; //finding the middle index in each iteration
		if(a[mid]==key) return mid; // key found so return answer
		else if(a[mid]<key) s=mid+1; // discarding the first half
		else if(a[mid]>key) e=mid-1; // discarding the second half
	}
	return -1; // in case no key is found
}
int main(){
	int n;
	cout << "Enter number of elements : " << '\n';
	cin >> n;
	int *a=new int[n];
	for(int i=0;i<n;i++) cin >> a[i];
	int key;
	cout << "Enter the key : ";
	cin >> key;
	int ans=binary_search(a,n,key);
	(ans==-1)? cout << "Key not found" : cout << "Key found at index" << ans+1;
	return 0;

}

