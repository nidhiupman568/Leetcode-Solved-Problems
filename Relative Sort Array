class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
//step 1
        int h[1001] = {0};
        int a = arr1.size(), b = arr2.size();
        for(int i=0;i<a;i++){
            h[arr1[i]]++;
        }
        
//step 2        
        int j=0;
        for(int i = 0;i<b;i++){
            while(h[arr2[i]]){
                arr1[j++]=arr2[i];h[arr2[i]]--;
            }
        }
        
    
//step 3        
        for(int i =0;i<1001;i++){
            while(h[i]--){
                arr1[j++]=i;
            }
        }
        return arr1;
    }
};
