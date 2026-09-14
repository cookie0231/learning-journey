// 输入人数：允许 1～100 人。输入 0、负数或超过 100，提示重新输入。

// 输入成绩：每人一个整数成绩，范围 0～100。超出范围就重新输入该学生的成绩。

// 成绩排序：自己写冒泡排序，按从高到低输出，不用 sort()。

// 输出平均分：保留小数，不要用整数除法截掉小数部分。

// 输出第二高分：指第二个不同的分数。例如 95、95、80，第二高分是 80。只有一个人或所有人成绩相同时，输出“没有第二高分”。


#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"请输入人数"<<endl;
    cin>>num;
    while (!(num>=1&&num<=100))
    {
        cout<<"不在范围，请重新输入"<<endl;
        cin>>num;
    };
    int score[100];
    for(int i = 0 ; i < num ; i++)
    {
        cout<<"请输入第"<<i+1<<"位同学的成绩"<<endl;
        cin>>score[i];
        while(!(score[i]>=0 && score[i]<=100))
        {
            cout<<"成绩范围在0~100，请重新输入"<<endl;
            cin>>score[i];
        }
    }
    int temp;
    for(int j=0;j<num-1;j++)
    {
        for(int k=0;k<num-j-1;k++)
        {
            if(score[k]<score[k+1])
            {
                temp = score[k];
                score[k] = score[k+1];
                score[k+1] = temp;
            }
        }
    }
    double sum = 0;
    for(int f = 0 ; f < num ; f++)
    {
        cout<<score[f]<<endl;
        sum = sum +score[f];
    }
    double avg = sum / num ;
    cout<<"平均数为："<<avg<<endl;
    bool found = false;
    for(int g = 0 ; g < num ; g++)
    {
        if(score[g] < score[0])
        {
            cout<<"第二高分为："<<score[g]<<endl;
            found = true;
            break;
        }
    }
    if(!found)
    {
        cout<<"没有第二高分"<<endl;
    }
    // 统计各分数段人数：
// - 优秀：90～100
// - 良好：80～89
// - 中等：70～79
// - 及格：60～69
// - 不及格：0～59
    int excellent = 0;
    int good = 0;
    int medium = 0;
    int pass = 0;
    int fail = 0;
    for(int x = 0 ; x < num  ; x++)
    {
        if(score[x] >= 90 && score[x] <= 100)
        {
            excellent++;
        }
        else if(score[x] >= 80 && score[x] <= 89)
        {
            good++;
        }
        else if(score[x] >= 70 && score[x] <= 79)
        {
            medium++;
        }
        else if(score[x] >= 60 && score[x] <= 69)
        {
            pass++;
        }
        else{
            fail++;
        }
    }
    cout<<"优秀的人数为："<<excellent<<endl;
    cout<<"良好的人数为："<<good<<endl;
    cout<<"中等的人数为："<<medium<<endl;
    cout<<"及格的人数为："<<pass<<endl;
    cout<<"不及格的人数为："<<fail<<endl;
}