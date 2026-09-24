class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> grp;

        for( auto& s: strs){
            string k = s;
            sort(k.begin(),k.end());
            grp[k].push_back(s);
        }

        vector<vector<string>> r;
        for ( auto& pair : grp){
            r.push_back(pair.second);
        }

        return r;
    }
};
