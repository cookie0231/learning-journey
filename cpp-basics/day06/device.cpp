#include"device.h"

int findDevice(Device device[], int count, int id)
{
	for (int i = 0; i < count; i++)
	{
		if (id == device[i].id)
		{
			return i;
		}
	}
	
	return -1;
}

void AddDevice(Device device[],int* count)
{
	if ( *count >= 0 && *count < 100 )
	{
		cout << "请输入编号" << endl;
		cin >> device[*count].id;
		if (device[*count].id <= 0 )
		{
			cout << "编号必须大于0" << endl;
			return ;
		}
		int p = findDevice(device, *count, device[*count].id);
		if (p != -1)
		{
			cout << "已有该编号" << endl;
			return;
		}
		cout << "请输入名称" << endl;
		cin >> device[*count].name;
		cout << "请输入状态（0离线，1在线）" << endl;
		int state;
		cin >> state;
		while (state != 0 && state != 1)
		{
			cout << "状态只能是0和1，请重新输入" << endl;
			cin >> state;
		}
		device[*count].online = state;
		(*count)++;
	}
	else
	{
		cout << "容量已满" << endl;
	}
}

void selectDevice(Device device[],int* count,int id)
{
	int p = findDevice(device, *count, id);
	if (p == -1)
	{
		cout << "未查询到此设备" << endl;
	}
	else
	{
		cout << "编号：" << device[p].id << "\t";
		cout << "名称：" << device[p].name << "\t";
		cout << "状态：" << device[p].online << endl;
	}
}

void deleteDevice(Device device[], int* count, int id)
{
	int p = findDevice(device, *count, id);
	if (p == -1)
	{
		cout << "未查询到此设备" << endl;

	}
	else
	{
		for (int i = p;i < *count-1;i++)
		{
			device[i] = device[i + 1];
			
		}
		(*count)--;
	}
}
void printDevice(Device device[], int count)
{
	if (count != 0)
	{
		for (int i = 0;i < count;i++)
		{
			cout << "编号：" << device[i].id << "\t";
			cout << "名称：" << device[i].name << "\t";
			cout << "状态：" << device[i].online << endl;
		}
	}
	else 
	{
		cout << "没有设备" << endl;
	}
}