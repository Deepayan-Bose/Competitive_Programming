#include <iostream>
#include <climits>
using namespace std;

int main(){
	
	int largest=INT_MIN,smallest=INT_MAX;
	int s_largest=INT_MIN,s_smallest=INT_MAX;
	int n;
	cout << "Enter the size of the array : ";
	cin >> n;
	int *a= new int[n];
	for(int i=0;i<n;i++) cin >> a[i];
	//Algorithm to find largest and smallest number'
	// Time Complexity : O(n)
	//Space Complexity : O(1)
	/*
	for(int i=0;i<n;i++){
		if(largest<a[i]) largest=a[i];
		if(smallest>a[i]) smallest=a[i];
	}
	*/
	//Algorithm to find largest and second largest
	//Time Complexity : O(n)
	//Space Complexity : O(1)
	for(int i=0;i<n;i++){
		if(a[i]>largest){ // for updating the largest number, we also update the s_largest to old largest
			s_largest=largest; // updating s_largest to old largest
			largest=a[i]; // updating largest
		}
		if(a[i]> s_largest and a[i]<largest) s_largest=a[i]; // for updating only the s_largest number when we find a number greater than s_largest but smaller than largest
		if(a[i]<smallest){// for updating smallest number, we also need to update the s_smallest
			s_smallest=smallest; // updating s_smallest to old smallest
			smallest=a[i]; // updating smallest
		}
		if(a[i]<s_smallest and a[i]> smallest) s_smallest=a[i];
	}
	cout << "Smallest : " << smallest << '\n' << "Largest : " << largest << '\n';
	cout << "Second largest : " << s_largest << '\n' << "Second smallest : " << s_smallest;

	
}

