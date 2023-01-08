class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> shash(26,0);
        vector<int> thash(26,0);
        for(char ch:s)
        {
            shash[ch-'a']+=1;
        }
        for(char ch:t)
        {
            thash[ch-'a']+=1;
        }
        for(int i=0;i<26;i++) if(shash[i]!=thash[i]) return false;
        return true;
    }
};
