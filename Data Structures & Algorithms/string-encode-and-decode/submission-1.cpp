class Solution {
public:

    string encode(vector<string>& strs) {
        string rst="";
        for (auto& w:strs)
            rst+= to_string(w.size()) + "#" +w;
        return rst;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i=0;
         while (i < s.size()) {
            int j = i;
            while (s[j] != '#') j++;               
            int len = stoi(s.substr(i, j - i));     
            result.push_back(s.substr(j + 1, len)); 
            i = j + 1 + len;                        
        }
        return result;
    }
};
  