void bubble_sort_rec(int arr[], int n){
    if(n==1) return;
    bool swapped=false;
    for(int i=0;i<n-1;i++){
        
        if(arr[i]>arr[i+1]) {
            swap(arr[i],arr[i+1]);
            swapped=true;
        }
    }
    if(!swapped) return;
    else bubble_sort_rec(arr,n-1);
}

void bubble_sort_rec_2(int arr[],int n,int j){
    if(n==1) return;
    if(j==n-1){
        bubble_sort_rec_2(arr,n-1,0);
        return;
    }
    if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);

    bubble_sort_rec_2(arr,n,j+1);
}
