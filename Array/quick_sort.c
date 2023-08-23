void qs(vector<int> &array,int s,int e){
    if(s>=e) return;
    int pivot_index=e;
    int i=s-1,j=s;
    while(j<e){
        if(array[j]<=array[pivot_index]){
            swap(array[i+1],array[j]);
            i++;
        }
        j++;
    }
    swap(array[i+1],array[pivot_index]);
    qs(array,s,i);
    qs(array,i+1,e);
}
