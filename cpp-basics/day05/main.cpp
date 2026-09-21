#include<iostream>
using namespace std;
#include"score_stats.h"

int main()
{
	int num;
	people_num(&num);
	int score[100];
	score_input(score,num);
	sortscores(score,num);
	avg(score, num);
	avgbypointer(score, num);
	coutsecend(score, num);
	printgradecounts(score, num);
}