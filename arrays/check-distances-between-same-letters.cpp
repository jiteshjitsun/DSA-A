class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        map<char, int> mp;
        for(int i=0; i<s.length(); i++){
            if(mp.find(s[i]) != mp.end()) {
                auto it = mp.find(s[i]);
                mp[s[i]] = i - it->second-1;
            } else {
                mp[s[i]] = i;
            }
        }

        for(auto it: mp) {
            if(distance[(int)(it.first)-97] != it.second){
                return false;
            }
        }

        return true;
    }
};