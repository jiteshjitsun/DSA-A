// using count sort
// TC = O(n + m + k) SC = O(1000)
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        int maxEle = *max_element(arr1.begin(), arr1.end());
        vector<int> count(maxEle + 1);

        for(int ele: arr1) {
            count[ele]++;
        }

        vector<int> res;

        for(int ele: arr2) {
            while(count[ele] > 0) {
                res.push_back(ele);
                count[ele]--;
            }
        }

        for(int num = 0; num <= maxEle; num++) {
            while(count[num] > 0) {
                res.push_back(num);
                count[num]--;
            }
        }
        return res;
    }
};


// way i followed 
// TC = O(nlogn) SC = O(n)
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> mp;

        for(int i=0; i<arr1.size(); i++) {
            mp[arr1[i]]++;
        }

        vector<int> v;
        for(int i=0; i<arr2.size(); i++) {

            while(mp.find(arr2[i]) != mp.end()) {
                v.push_back(arr2[i]);
                mp[arr2[i]]-=1;
                if(mp[arr2[i]]==0)
                    mp.erase(arr2[i]);
            }
        }

        while(!mp.empty()) {
            auto it = mp.begin();
            int n = it->second;
            while(n--)
                v.push_back(it->first);
            mp.erase(it);
        }

        return v;
    }
};