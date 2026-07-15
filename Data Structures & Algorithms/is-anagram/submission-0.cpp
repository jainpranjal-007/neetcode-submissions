class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        unordered_map<char,int>f1;
        unordered_map<char,int>f2;
        for(auto i:s)f1[i]++;
        for(auto i:t)f2[i]++;
        for(auto i:s){
            if(f1[i]!=f2[i])return false;
        }
        return true;
    }
};
