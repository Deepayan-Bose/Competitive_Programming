/Insertion Sort
// Time Complexity : O(n^2)
//Space Complexity : O(1)
#include <iostream>
#include <climits>
using namespace std;
void insertion_sort(int a[],int n){ 
	
	for(int i=1;i<n;i++){
		int j=i-1,key=a[i];
		/* Move elements of arr[0..i-1],
           that are greater than key,
           to one position ahead of
           their current position */
		while(j>=0 and key<a[j]){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
}
int main(){
	int n;
	cout << "Enter number of elements : " << '\n';
	cin >> n;
	int *a=new int[n];
	for(int i=0;i<n;i++) cin >> a[i];
	insertion_sort(a,n);
	for(int i=0;i<n;i++) cout << a[i] << ' ';
	return 0;

}
