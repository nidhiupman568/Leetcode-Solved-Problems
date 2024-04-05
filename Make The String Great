class Solution {
public:
    string makeGood(string s) {
        int n=s.size();
        for(int i=0;i<n-1;i++){
            if(abs(s[i]-s[i+1])==32){
// lets take an e.g., to better understand, say s = "abBAcC" , and at i=1, we find we have to remove i=1 and i=2th character to make the string great and then we have to again 
// start the loop from i=0, so we make i=-1 because in next iteration i will be incremented and hence starts from 0, and since the length of the
// string has been reduced by 2, we decrement n by 2.
                s=s.substr(0,i)+s.substr(i+2,n-i-2);
                i=-1;
                n-=2;
            }
        }
        return s;
    }
};
