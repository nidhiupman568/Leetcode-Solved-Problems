class Solution {
  public:
    string decodedString(string &s) {
        
        stack<char> st;
        
        int n = s.size();
        int i = 0;
        
        while(i < n){
            
            // poping out
            if(s[i] == ']'){
                
                string temp = "";
                
                // collect the string for repetation
                while(st.top() != '['){
                    temp += st.top();
                    st.pop();
                }
                
                // remove the first bracket
                st.pop();
                
                // reverse(temp.begin(), temp.end());
                
                // calculate the count
                int count = 0;
                string countStr = "";
                
                while(!st.empty() && st.top() >= '0' && st.top() <= '9'){
                    
                    countStr += st.top();
                    st.pop();
                }
                
                reverse(countStr.begin(), countStr.end());
                count = stoi(countStr);
                
                for(int j = 0; j < count; j++){
                    
                    int m = temp.size();
                    
                    for(int k = m-1; k >= 0; k--){
                        st.push(temp[k]);
                    }
                }
            }
            // push back
            else{
                st.push(s[i]);
            }
            
            i++;
        }
        
        string temp = "";
        
        while(!st.empty()){
            temp += st.top();
            st.pop();
        }
        
        reverse(temp.begin(), temp.end());
        
        return temp;
        
    }
};
