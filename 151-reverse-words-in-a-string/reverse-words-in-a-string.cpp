class Solution {
public:
    string reverseWords(string s) {
        // string word ="";
        // stack<string> st;
        // for(int i=0;i<s.size();i++){
        //     if(s[i]!=' '){
        //         word += s[i];
        //     }
        //     else if(!word.empty()){
        //         st.push(word);
        //         word ="";
        //     }
        // }
        // if(!word.empty()){
        //     st.push(word);
        // }
        // string ans = "";
        // while(!st.empty()){
        //     ans += st.top();
        //     st.pop();
        //     if(!st.empty()){
        //         ans += " ";
        //     }
        // }
        // return ans;

        string ans ="";
        int i = s.size() - 1;
        while(i>=0){
            while(i>=0 && s[i]==' ') i-- ;
            if(i<0) break;
            int end=i;
            while(i>=0 && s[i]!=' '){
                i--;
            }
            if(!ans.empty()){
                ans += " ";
            }
            ans+= s.substr(i+1,end-i);//substr here acts like (start,length)
        }
        return ans;
    }
};