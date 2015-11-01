class Solution {
public:
/*
 *越是简单越是要考虑的问题越多：
 *1.符号问题 ’+','-'开头或者不加符号
 *2.开头空白符号处理
 *3.非法字符问题
 *4.溢出处理
 *非法字符、溢出题目没给出怎么处理，提交后才知道
 *这些在面试中都要先向面试官问清楚
                                */
    int myAtoi(string str) {
        if(str.empty())
            return 0;
        int res=0;
        int len=str.size(),index=0;
        int Minus=1;//判断是正负数，正为1，负为-1；
        //去除开头空格
        while(str[index]==' '){
            index++;
        }
        //判断开头是否有加符号
        if(str[index]=='-'){
            Minus=-1;
            index++;
        }
        else if (str[index]=='+'){
            index++;
        }

        while(index<len){
            //是否为数字字符
            if(str[index]>='0'&&str[index]<='9'){
                //溢出判断
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
