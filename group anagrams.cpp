// Problem link : https://leetcode.com/problems/group-anagrams/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        
        vector<vector<string>> res;
        map<string, vector<string> > mpp;
        
        for (auto s:strs)  //hashing
        {
            string temp=s;
            sort(s.begin(),s.end());
            
            mpp[s].push_back(temp);  //key: sorted string value: real string 
        }
        
        for(auto it: mpp)
        {
            res.push_back(it.second);
        }
         return res;
    }
};
