class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> magafreq(26,0);
        for(int i=0;magazine[i]!='\0';i++)
        {
            magafreq[magazine[i]-'a']+=1;
        }
        for(int i=0;ransomNote[i]!='\0';i++)
        {
            if(magafreq[ransomNote[i]-'a']==0) return false;
             magafreq[ransomNote[i]-'a']-=1;
        
        }
        return true;
    }
};
