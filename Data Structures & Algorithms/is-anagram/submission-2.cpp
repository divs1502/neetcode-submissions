class Solution {
public:
    bool isAnagram(string s, string t) {
        // set<char> s1;
        // set<char> t1;
        // We need multiset since we can store dupes as welll
        multiset<char> s1;
        multiset<char> t1;

        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            s1.insert(s[i]);
        }
        for(int i=0;i<t.length();i++){
            t1.insert(t[i]);
        }

        // for (char x : s1) {
        // std::cout << x << " ";
        // }
        return s1==t1;
    }
};
