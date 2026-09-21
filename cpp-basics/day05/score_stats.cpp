#include"score_stats.h"
using namespace std;

void people_num(int* num)
{
    cout << "请输入人数" << endl;
    cin >> *num;
    while (!(*num >= 1 && *num <= 100))
    {
        cout << "不在范围，请重新输入" << endl;
        cin >> *num;
    };
}

void score_input(int score[],int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << "请输入第" << i + 1 << "位同学的成绩" << endl;
        cin >> score[i];
        while (!(score[i] >= 0 && score[i] <= 100))
        {
            cout << "成绩范围在0~100，请重新输入" << endl;
            cin >> score[i];
        }
    }
}
void sortscores(int score[],int num)
{
    int temp;
    for (int j = 0;j < num - 1;j++)
    {
        for (int k = 0;k < num - j - 1;k++)
        {
            if (score[k] < score[k + 1])
            {
                temp = score[k];
                score[k] = score[k + 1];
                score[k + 1] = temp;
            }
        }
    }
}
void avg(int score[], int num)
{
    double sum = 0;
    for (int f = 0; f < num; f++)
    {
        cout << score[f] << endl;
        sum = sum + score[f];
    }
    double avg = sum / num;
    cout << "平均数为：" << avg << endl;
}
void avgbypointer(const int* score, int num)
{
    double sum = 0;
    for (int p = 0; p < num; p++)
    {
        sum = sum + *(score + p);
    }
    cout << "平均数" << sum / num << endl;
}
void coutsecend(int score[], int num)
{
    bool found = false;
    for (int g = 0; g < num; g++)
    {
        if (score[g] < score[0])
        {
            cout << "第二高分为：" << score[g] << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "没有第二高分" << endl;
    }
}
void printgradecounts(int score[], int num)
{
    int excellent = 0;
    int good = 0;
    int medium = 0;
    int pass = 0;
    int fail = 0;
    for (int x = 0; x < num; x++)
    {
        if (score[x] >= 90 && score[x] <= 100)
        {
            excellent++;
        }
        else if (score[x] >= 80 && score[x] <= 89)
        {
            good++;
        }
        else if (score[x] >= 70 && score[x] <= 79)
        {
            medium++;
        }
        else if (score[x] >= 60 && score[x] <= 69)
        {
            pass++;
        }
        else {
            fail++;
        }
    }
    cout << "优秀的人数为：" << excellent << endl;
    cout << "良好的人数为：" << good << endl;
    cout << "中等的人数为：" << medium << endl;
    cout << "及格的人数为：" << pass << endl;
    cout << "不及格的人数为：" << fail << endl;
}