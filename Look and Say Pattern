class Solution
{
  public:
    string lookandsay(int n) {
        // code h
        string ans = "1";
        string temp;
        n--;
        while(n--)
        {
            int count = 1;
            for(int i = 1 ; i < ans.size(); i++)
            {
                if(ans[i] == ans[i-1]) count++;
                else
                {
                    temp += to_string(count) + ans[i-1];
                    count = 1;
                }
            }
            temp += to_string(count) + ans[ans.size()-1];
            ans = temp;
            temp = "";
        }
        return ans;
    }   
};
