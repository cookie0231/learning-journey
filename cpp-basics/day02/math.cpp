// 1. 输入两个数字。
// 2. 选择 + - * / 四种运算。
// 3. 输入非法选项时提示错误。
// 4. 除数为 0 时拒绝计算。
// 5. 计算结束后能选择是否继续。
// 验收：至少自己测试 8 组输入，不复制课程案例
#include<iostream>
using namespace std;

int main()
{
    
    double  a,b;
    char again; 
    do
    {
        cout<<"请输入两个数字："<<endl;
        cin>>a;
        cin>>b;
        cout << "请选择运算方式：1.+   2.-   3.*   4./"<<endl;
        int choose;
        cin>>choose;
        
        switch(choose)
        {
            case 1:
                cout<<"a+b=:"<<a+b<<endl;
                break;
            case 2:
                cout<<"a-b=:"<<a-b<<endl;
            break;
                case 3:cout<<"a*b=:"<<a*b<<endl;
            break;
            case 4:
                if(b==0)
                    {
                        cout<<"除数为0，拒绝计算"<<endl;
                    }
                    else
                    {
                        cout<<"a/b=:"<<a/b<<endl;
                    }
                break;
            default:
                cout <<"非法选项，请重新选择"<<endl;

            }
        cout<<"继续请输入y或Y，输入其他键退出"<<endl;
        cin>>again;        
        
    }while(again =='y'||again == 'Y');
 
}