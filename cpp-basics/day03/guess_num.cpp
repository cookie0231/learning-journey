#include<iostream>
using namespace std;
#include<ctime>
#include<cstdlib>

int main()
{
    srand(time(0));
    char again;
    do
    {
        cout<<"请选择游戏难度:"<<endl;
        cout<<"1.简单：随机数范围 1~50,最多猜 10 次"<<endl;
        cout<<"2.普通：随机数范围 1~100,最多猜 8 次"<<endl;
        cout<<"3.困难：随机数范围 1~200,最多猜 7 次"<<endl;
        int degree,max,min,choice;
        
        int ch;
        do
        {
            ch = 0;
            cin>>degree;
            switch(degree)
            {

                case 1:
                    max=50,min=1,choice=10;
                    break;
                case 2:
                    max=100,min=1,choice=8;
                    break;
                case 3:
                    max=200,min=1,choice=7;
                    break;
                default:
                    cout<<"输入错误，请重新输入"<<endl;
                    ch=1;
                    break;
            }
        }while(ch==1);

        int num = rand()% (max - min + 1) +min;
        cout<<"我已生成随机数，请猜测："<<endl;
        int guess;
        bool guessed = false;
        for(int i = 0;i < choice ; i++)
        {
            cin>>guess;
            if(guess<num)
            {
                cout<<"小了,请重新输入，你还剩余"<<choice-i-1<<"次机会"<<endl;
            }
            else if(guess>num)
            {
                cout<<"大了,请重新输入，你还剩余"<<choice-i-1<<"次机会"<<endl;
            }
            else
            {
                cout<<"恭喜你猜对了"<<endl;
                guessed=true;
                break;
            }
        }
        if(!guessed)
        {
            cout<<"次数已消耗完，正确答案是"<<num<<endl;
        }
        cout << "是否再玩一局,y/n";
        cin>>again;
    } while (again=='y');
    


}