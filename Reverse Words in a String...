/*

    Time Complexity : O(N), where n is the total number of characters in the given string.

    Space Complexity : O(1), Constant space. In-place solution.

    Solved using String + Two Pointers.

/*


/***************************************** Approach 1 *****************************************/

class Solution {
private:
    void reverse(string &s, int i, int j){
        while(i<j){
          char temp=s[i];
          s[i++]=s[j];
          s[j--]=temp;
        } 
    }
public:
    string reverseWords(string &s) {
        int i=0, j=0;
        int l=0;
        int len=s.length();
        int wordcount=0;
        while(true){
            while(i<len && s[i] == ' ') i++;
            if(i==len) break;
            if(wordcount) s[j++]=' ';
            l=j;
            while(i<len && s[i] != ' ') {s[j]=s[i]; j++; i++;} 
            reverse(s,l,j-1);                
            wordcount++;   
        }
        s.resize(j);                           
        reverse(s,0,j-1);  
        return s;        
    }
};






/*

    Time Complexity : O(N), where n is the total number of characters in the given string.

    Space Complexity : O(1), Constant space. Extra space is only allocated for the String(ans), however the
    output does not count towards the space complexity.

    Solved using String. 

/*


/***************************************** Approach 2 *****************************************/
/*
class Solution {
public:
    string reverseWords(string &s){
        stringstream ss(s);
        string word, ans;
        while(ss >> word){
            ans = word + " " + ans;
        }
        return ans.substr(0, ans.size()-1);;     
    }
};*/
