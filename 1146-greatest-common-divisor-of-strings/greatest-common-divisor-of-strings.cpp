class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n1 = str1.size();
        int n2 = str2.size();
        if(str1 + str2 != str2 + str1){
            return "";
        }
        else{
            int len= gcd(n1,n2);
            return str1.substr(0,len);
        }
    }
};