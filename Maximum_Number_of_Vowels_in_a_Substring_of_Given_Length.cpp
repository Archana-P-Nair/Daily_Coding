class Solution {
public:
    int maxVowels(string s, int k) {
        int count=0;
        unordered_set<char> m;
        m.insert('a');
        m.insert('e');
        m.insert('o');
        m.insert('i');
        m.insert('u');
        for(int i=0;i<k;i++){
            if(m.contains(s[i])){
                count++;
            }
        }
        int maxvowels=count;
        for(int i=k;i<s.length();i++){
            if(m.contains(s[i-k])){
                count--;
            }
            if(m.contains(s[i])){
                count++;
            }
            maxvowels=max(maxvowels,count);
        }
        return maxvowels;
    }
};Maximum Number of Vowels in a Substring of Given Length
