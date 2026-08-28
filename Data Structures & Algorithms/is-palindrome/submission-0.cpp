class Solution {
public:
    bool isPalindrome(string s) {
        int front =0;
        int end= s.length()-1;
        while(front <= end ){
            if(!isalnum(s[front])){
                front++;
                continue;

            }
            if(!isalnum(s[end])){
                end--;
                continue;
            }
            if(tolower(s[front]) == tolower(s[end])){
                front++;
                end--;
                
            }else{
                return false;
            }
        }
        return true;
    }
};
