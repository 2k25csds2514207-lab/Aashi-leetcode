
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> ans;
        vector<int> freq(26, 0);

        int n = s.size();
        int k = p.size();

        if(k > n) return ans;

        for(int i = 0; i < k; i++) {
            freq[p[i] - 'a']++;
        }

        int i = 0, j = 0;

        while(j < n) {

            freq[s[j] - 'a']--;

            if(j - i + 1 == k) {

               
                bool flag = true;

                for(int x = 0; x < 26; x++) {
                    if(freq[x] != 0) {
                        flag = false;
                        break;
                    }
                }

                if(flag) {
                    ans.push_back(i);
                }

                freq[s[i] - 'a']++;
                i++;
            }

            j++;
        }

        return ans;
    }
};



