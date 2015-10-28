class Solution {
public:
    string convert(string s, int nRows)
    {
        string ret;
        int n=s.size();
        vector<string>v(nRows);
        for(int i=0;i<n;)
        {
            for(int j=0;j<nRows&&i<n;j++,i++)
            v[j]+=s[i];
            for(int j=nRows-2;j>0&&i<n;j--,i++)
            v[j]+=s[i];
        }
        for(int i=0;i<nRows;i++)
        {
            for(int j=0;j<v[i].size();j++)
            ret+=v[i][j];
        }
        return ret;
    }
};
