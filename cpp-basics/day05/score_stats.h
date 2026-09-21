#ifndef SCORE_STATS_H
#define SCORE_STATS_H
#include<iostream>

void people_num(int* num);
void score_input(int score[],int num);
void sortscores(int score[],int num);
void avg(int score[], int num);
void coutsecend(int score[], int num);
void printgradecounts(int score[], int num);
void avgbypointer(const int* score,int num);
#endif