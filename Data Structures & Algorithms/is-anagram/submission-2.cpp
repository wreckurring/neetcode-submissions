class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        int freq[300] = {0};

        for(auto ch: s) {
            freq[ch]++;
        }
        for(auto ch: t) {
            freq[ch]--;
        }

        for(auto n : freq) {
            if(n != 0) return false;
        }

        return true;
    }
};
