class Solution {
public:
/*
 *Խ�Ǽ�Խ��Ҫ���ǵ�����Խ�ࣺ
 *1.�������� ��+','-'��ͷ���߲��ӷ���
 *2.��ͷ�հ׷��Ŵ���
 *3.�Ƿ��ַ�����
 *4.�������
 *�Ƿ��ַ��������Ŀû������ô�����ύ���֪��
 *��Щ�������ж�Ҫ�������Թ������
                                */
    int myAtoi(string str) {
        if(str.empty())
            return 0;
        int res=0;
        int len=str.size(),index=0;
        int Minus=1;//�ж�������������Ϊ1����Ϊ-1��
        //ȥ����ͷ�ո�
        while(str[index]==' '){
            index++;
        }
        //�жϿ�ͷ�Ƿ��мӷ���
        if(str[index]=='-'){
            Minus=-1;
            index++;
        }
        else if (str[index]=='+'){
            index++;
        }

        while(index<len){
            //�Ƿ�Ϊ�����ַ�
            if(str[index]>='0'&&str[index]<='9'){
                //����ж�
                if((res*10+str[index]-'0')/10!=res){
                    if(Minus==1)
                        return INT_MAX;
                    else
                        return (-INT_MAX-1);
                }
                res*=10;
                res+=str[index]-'0';
                index++;
            }
            else
                break;
        }
        if(Minus==-1)
            res=-res;

        return res;
    }
};
