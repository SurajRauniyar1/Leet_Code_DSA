class Solution {
public:
    long long TotalHour(vector<int>&piles,int h){
       long long hour =0;
        for(int banana:piles){
             hour +=(banana+h-1LL)/h;
        }
        return hour;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int st=1,end=*max_element(piles.begin(),piles.end());
        while(st<=end){
            int mid= st+(end-st)/2;
            long long hour=TotalHour(piles,mid);
            if(hour<=h){
                end=mid-1;
            }
            else
            st=mid+1;
        }
        return st;
    }
};