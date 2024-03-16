class Solution {
public:
    void sortColors(vector<int>& a) {
        int low=0,mid=0,high=a.size()-1;
        while(mid<=high){
            if(a[mid]==0){
                swap(a[mid],a[low]);
                low++,mid++;
            }
            else if(a[mid]==1){
                mid++;
            }
            else{
                swap(a[mid],a[high]);
                high--;
            }
        }
    }
};