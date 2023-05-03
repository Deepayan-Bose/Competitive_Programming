void stockSpan(int prices[],int n,int span[]){
    stack<int> s; //indices of the days
    s.push(0);

    span[0]=1;
    //lopp for rest of the days
    for(int i=1;i<=n-1;i++){
        int currentPrice=price[i];
        //topmost element that is higher than current prices
        while(!s.empty() and price[s.top()]<=currentPrice) s.pop();
        if(!s.empty()){
        int prev_highest=s.top();
        span[i]=i-prev_highest;
        }
        else span[i]=i+1;
        //pushing current price index
        s.push(i);
    }

}
