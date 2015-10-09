class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        if(!numRows)
            return triangle;

        vector<int> firstLine;
        firstLine.push_back(1);
        triangle.push_back(firstLine);

        for(int i=1;i<numRows;i++){
            vector<int> t;
            t.push_back(1);
            for(int j=1;j<i;j++){
               int num=triangle[i-1][j-1]+triangle[i-1][j];
               t.push_back(num);
            }
            t.push_back(1);
            triangle.push_back(t);
        }
        return triangle;
    }
};
