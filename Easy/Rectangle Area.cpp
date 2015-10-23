class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int area=(A-C)*(B-D)+(E-G)*(F-H);
        //( max(A,E),max(B,F) )为交叉矩形的左下角顶点坐标
        //( min(C,G),min(D,H) )为交叉矩形的右上角顶点坐标
        int x1=max(A,E);
        int y1=max(B,F);
        int x2=min(C,G);
        int y2=min(D,H);
        //两个矩形相交的话，左上角的坐标必大于右上角的坐标，斜率大于0
        //不想交的话，求出来的两个点斜率小于0
        if(x2>x1&&y2>y1)
            area-=(x2-x1)*(y2-y1);
        return area;
    }
};
