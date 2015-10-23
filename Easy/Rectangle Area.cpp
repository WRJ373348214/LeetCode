class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int area=(A-C)*(B-D)+(E-G)*(F-H);
        //( max(A,E),max(B,F) )Ϊ������ε����½Ƕ�������
        //( min(C,G),min(D,H) )Ϊ������ε����ϽǶ�������
        int x1=max(A,E);
        int y1=max(B,F);
        int x2=min(C,G);
        int y2=min(D,H);
        //���������ཻ�Ļ������Ͻǵ�����ش������Ͻǵ����꣬б�ʴ���0
        //���뽻�Ļ����������������б��С��0
        if(x2>x1&&y2>y1)
            area-=(x2-x1)*(y2-y1);
        return area;
    }
};
