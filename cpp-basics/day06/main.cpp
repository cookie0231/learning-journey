#include<iostream>
using namespace std;
#include"device.h"


int main()
{
	Device devices[100];
	int count = 0;
	while (true)
	{
		cout << "请选择编号" << endl;
		cout << "1.添加设备" << endl;
		cout << "2. 按编号查找设备" << endl;
		cout << "3. 按编号删除设备" << endl;
		cout << "4. 显示全部设备" << endl;
		cout << "0. 退出" << endl;
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1:
			AddDevice(devices, &count);
			break;
		case 2:
			int id;
			cout << "请输入编号" << endl;
			cin >> id;
			selectDevice(devices, &count, id);
			break;
		case 3:
			int id1;
			cout << "请输入编号" << endl;
			cin >> id1;
			deleteDevice(devices, &count, id1);
			break;
		case 4:
			printDevice(devices, count);
			break;
		case 0:
			return 0;
		}
	}
}