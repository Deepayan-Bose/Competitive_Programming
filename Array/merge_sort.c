void merge(vector<int> &array,int s,int mid,int e){
    vector<int> dummy;
    
    int low_1=s,low_2=mid+1;
    while(low_1<=mid and low_2<=e){
        if(array[low_1]<=array[low_2]){
            dummy.push_back(array[low_1]);
            low_1++;
        }
        else {dummy.push_back(array[low_2++]);low_2++;}
    }
    while(low_1<=mid) {
        dummy.push_back(array[low_1]);
        low_1++;
    }
    while(low_2<=e){
        dummy.push_back(array[low_2]);
        low_2++;
    }

    for(int i=s;i<=e;i++)
         array[i]=dummy[i-s];
        
}
void mergesort(vector<int> &array,int s,int e){
    if(s>=e) return;
    int mid=s+(e-s)/2;
    mergesort(array,s,mid);
    mergesort(array,mid+1,e);
    merge(array,s,mid,e);
}
