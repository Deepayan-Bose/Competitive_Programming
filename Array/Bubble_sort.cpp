//Bubble Sort : Pairwise Swapping
// Time Complexity : O(n^2)
//Space Complexity : O(1)
#include <iostream>
#include <climits>
using namespace std;
void bubble_sort(int a[],int n){ 
	// N-1 elements to the end
	for(int i=0;i<n-1;i++){
		// swapped flag used in case no swapping occurs, i.e to check if array already sorted
		bool swapped=false;
		//pairwise swapping in the unsorted array
		for(int j=0;j<n-1-i;j++) if(a[j]>a[j+1]) {swap(a[j],a[j+1]); swapped=true;}
		if(swapped==false) break;
	}
}
int main(){
	int n;
	cout << "Enter number of elements : " << '\n';
	cin >> n;
	int *a=new int[n];
	for(int i=0;i<n;i++) cin >> a[i];
	bubble_sort(a,n);
	for(int i=0;i<n;i++) cout << a[i] << ' ';
	return 0;

}

