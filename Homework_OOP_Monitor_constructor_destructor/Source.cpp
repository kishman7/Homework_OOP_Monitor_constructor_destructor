#include <iostream>
#include <string>
#include<windows.h>

using namespace std;

// ��������� �������� ���� Monitor, ���� ������� ������:
// ����:
// ������ ��������������, �������� ��������, ����� ����;
// ���� �������.
// ������:
// ����������� �� ������������ �� � �����������;
// ����������;
// ��������� ������ ������� �� ���� �����, � ���� ���� ����������� �������� this;
// ������ ��� ������������ ������� � ���� �����;
// ����� Print() ��� ��������� ���� ����� �� �������.


class Monitor 
{
private:
	string producer;  // ��������
	string resolution;  // �������� ��������
	int size_diagonal; // ����� �������
	double price;  // ���� �������

public:
	Monitor() { // ����������� �� ������������

	}
	Monitor(string producer, string resolution, int size_diagonal, double price) { // ����������� � �����������
		this->producer = producer;
		this->resolution = resolution;
		this->size_diagonal = size_diagonal;
		this->price = price;
	}
	~Monitor() { // ����������
		cout << "����������!" << endl;
	}
	void Print() {
		cout << "---��� ��� ��� ������!---" << endl;
		cout << "��������: " << producer << endl;
		cout << "�������� ��������: " << resolution << endl;
		cout << "����� �������: " << size_diagonal << "\"" << endl;
		cout << "ֳ��: " << price << " ���." << endl;
		cout  << endl;
	}
};


int main()
{
	SetConsoleCP(1251);  //��� ����, �� ��������� �������� �����
	SetConsoleOutputCP(1251); //��� ����, �� ��������� �������� �����

	Monitor firstMonitor("Samsung","1920x1080",24,3200);
	firstMonitor.Print();

	string producer2;
	cout << "������ ����� ����� �������: ";
	cin >> producer2;
	string resolution;
	cout << "������ �������� �������� ����� �������: ";
	cin >> resolution;
	int size_diagonal;
	cout << "������ �������� ����� �������: ";
	cin >> size_diagonal;
	double price;
	cout << "������ ���� ����� �������: ";
	cin >> price;

	Monitor secondMonitor(producer2, resolution, size_diagonal, price);
	secondMonitor.Print();

	return 0;
}