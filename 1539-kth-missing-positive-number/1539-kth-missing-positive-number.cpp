class Solution {
/*
    TC=O(N) 
    Array ko traverse krte jao aur jo jo missing element found ho unhe store krte jao
    
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> mis;
        int len=arr.size();
        int ele=0,num;
        for(int i=0;i<len;i++){
            while(arr[i]-ele>1)
                mis.push_back(++ele);
            
            ele=arr[i];
        }
        for(auto i:mis)
            cout<<i<<" ";
        cout<<endl;
        if(mis.size()>=k){
            return mis[k-1];
        }
        else
            return arr[len-1]+k-mis.size();
    }
*/
public:
    int findKthPositive(vector<int>& arr, int k) {
        int start=0;
        int end=arr.size()-1;
        int mid;
        while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]-mid-1<k)
                start=mid+1;
            else
                end=mid-1;
        }
        return start+k;
    }
};