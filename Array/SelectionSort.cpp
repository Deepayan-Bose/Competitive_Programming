//Selection Sort : 
// Time Complexity : O(n^2)
//Space Complexity : O(1)
#include <iostream>
#include <climits>
using namespace std;
void selection_sort(int a[],int n){ 
	int minIndex;
	for(int i=0;i<n-1;i++){
		//Flag to check if subarray is already sorted
		bool flag=1;
		minIndex=i; //Setting the first index in the subarray
		//Loop to find out the smallest element index in the subarray
		for(int j=i+1;j<n;j++) {
			if(a[j-1]>a[j]) flag=0; // If subarray is not sorted then set off the flag
			if(a[j]<a[minIndex]) minIndex=j; // setting new minIndex when a smaller element is found
		}
		if(flag) break; // If array is already sorted we will break the loop
		if (minIndex!=i) swap(a[minIndex],a[i]); // Swapping the minimum element in subarray
	}
}
int main(){
	int n;
	cout << "Enter number of elements : " << '\n';
	cin >> n;
	int *a=new int[n];
	for(int i=0;i<n;i++) cin >> a[i];
	selection_sort(a,n);
	for(int i=0;i<n;i++) cout << a[i] << ' ';
	return 0;

}
