class Solution {
public:

    bool solve(string s)
    {
        int x = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '(') x++;
            if(s[i] == ')') x--;

            if(x < 0) return false;
        }
        return x == 0;
    }

    vector<string> removeInvalidParentheses(string s) 
    {
        int n = s.size();
        vector<string>ans;
        unordered_map<string, int>mp, mp1;
        deque<string>q;

        bool flag = false;
        q.push_back(s);
        while(!q.empty())
        {
            int nn = q.size();
            while(nn--)
            {
                string curr = q.front();
                q.pop_front();


                if(solve(curr) && !mp[curr]) 
                {
                    ans.push_back(curr);
                    mp[curr]++;
                    flag = true;
                    continue;
                }
              
                for(int i=0; i<curr.size(); i++)
                {
                    if(curr[i] != ')' && curr[i] != '(') continue;
                    string temp = curr.substr(0, i) + curr.substr(i + 1);
                    if(!mp1[temp]) q.push_back(temp), mp1[temp]++;
                }
            }

            if(flag) break;
        }

        return ans;
    }
};
