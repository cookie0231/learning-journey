#include<iostream>
using namespace std;
#ifndef DEVICE_H
#define DEVICE_H

struct Device
{
	int id;
	string name;
	bool online;
};

void AddDevice(Device device[],int* count);
int findDevice(Device device[],int count,int id);
void selectDevice(Device device[],int* count,int id);
void deleteDevice(Device device[], int* count, int id);
void printDevice(Device device[], int count);

#endif