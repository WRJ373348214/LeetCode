class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for(int row=0;row<9-2;row+=3){
            for(int colum=0;colum<9-2;colum+=3){
                //�ж�ÿһ���Ź���Χ���Ƿ�Ϸ�
                bool isUsed[10]={false};
                for(int i=0;i<3;i++)
                    for(int j=0;j<3;j++){
                        if(board[row+i][colum+j]=='.')
                            continue;
                        int index=board[row+i][colum+j]-'0';
                        if(isUsed[index])
                            return false;
                        else
                            isUsed[index]=true;
                    }
            }

        }
        //�ж�ÿһ���Ƿ�Ϸ�
        for(int row=0;row<9;row++){
            bool rowIsUsed[10]={false};
            for(int colum=0;colum<9;colum++){
                if(board[row][colum]=='.')
                    continue;
                int index=board[row][colum]-'0';
                if(rowIsUsed[index])
                    return false;
                rowIsUsed[index]=true;
            }
        }
        //�ж�ÿһ���Ƿ�Ϸ�
         for(int colum=0;colum<9;colum++){
            bool columIsUsed[10]={false};
            for(int row=0;row<9;row++){
                if(board[row][colum]=='.')
                    continue;
                int index=board[row][colum]-'0';
                if(columIsUsed[index])
                    return false;
                columIsUsed[index]=true;
            }
        }

        return true;
    }

};
