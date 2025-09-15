class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        if (strs[0] == "") return "";
        if(strs.size() == 1) return strs[0];
        int minLen = INT_MAX;
        string comp = strs[0];
        for(int i = 1; i < strs.size();i++)
        {
            int count = 0;
            string comp2 = strs[i];
            int compSize1 = comp.size();
            int compSize2 = comp2.size();
            int len = min(compSize1,compSize2);
            for(int k = 0; k < len; k++)
            {
                if(comp[k] != comp2[k])
                {
                    break;
                }
                count++;
            }
            comp = compSize1 >= compSize2 ? comp2 : comp;
            minLen = min(minLen,count);
        }
        if(minLen == 0)
            return ans;
        for(int i = 0; i < minLen;i++)
        {
            ans += comp[i];
        }
        return ans;
    }
};