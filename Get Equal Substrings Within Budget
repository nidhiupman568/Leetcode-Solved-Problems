class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
	
        int n=s.size(),arr[n];
		
        for(int i=0;i<n;i++)
            arr[i]=abs(s[i]-t[i]);
        
        int cost=0,start=0,maxlen=INT_MIN;
		
        for(int i=0;i<n;i++){
            cost+=arr[i];
        
            while(cost>maxCost)
                cost-=arr[start++];
        
            maxlen=max(maxlen,i-start+1);
        }
        return maxlen;
    }
};
