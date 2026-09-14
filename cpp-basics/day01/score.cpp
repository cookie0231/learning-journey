// 编码练习：写一个“学生五科成绩统计”程序：
// - 输入姓名
// - 输入 5 门成绩
// - 输出总分、平均分、最高分、最低分
#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout<<"请输入姓名"<<endl;
    string name;
    cin>>name;
    cout<<"请输入五门成绩"<<endl;
    int arr[5];
    for(int j=0;j<5;j++)
    {
        cin>>arr[j];
    }
    int total = arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
    double average = total/5.0;
    int max=arr[0] ;
    int min=arr[0];
    for(int i = 0;i < 5; i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
        if(min>arr[i])
        {
            min = arr[i];
        }
    }
    cout<<"总分为："<<total<<endl;
    cout<<"平均分为："<<average<<endl;
    cout<<"最高分为："<<max<<endl;
    cout<<"最低分为："<<min<<endl;
    return 0;
}
