#include <iostream>
#include <string>
#include<windows.h>

using namespace std;

// Необхідно створити клас Monitor, який повинен містити:
// поля:
// технічні характеристики, роздільна здатність, розмір тощо;
// ціна монітору.
// методи:
// Конструктор по замовчуванню та з параметрами;
// Деструктор;
// Стандартні методи доступу до полів класу, в яких явно використати вказівник this;
// Методи для встановлення значень в поля класу;
// Метод Print() для виведення полів класу на консоль.


class Monitor 
{
private:
	string producer;  // виробник
	string resolution;  // роздільна здатність
	int size_diagonal; // розмір діагоналі
	double price;  // ціна монітора

public:
	Monitor() { // конструктор по замовчуванню

	}
	Monitor(string producer, string resolution, int size_diagonal, double price) { // конструктор з параметрами
		this->producer = producer;
		this->resolution = resolution;
		this->size_diagonal = size_diagonal;
		this->price = price;
	}
	~Monitor() { // Деструктор
		cout << "Деструктор!" << endl;
	}
	void Print() {
		cout << "---Дані про Ваш монітор!---" << endl;
		cout << "Виробник: " << producer << endl;
		cout << "Роздільна здатність: " << resolution << endl;
		cout << "Розмір діагоналі: " << size_diagonal << "\"" << endl;
		cout << "Ціна: " << price << " грн." << endl;
		cout  << endl;
	}
};


int main()
{
	SetConsoleCP(1251);  //для того, що працювали українські букви
	SetConsoleOutputCP(1251); //для того, що працювали українські букви

	Monitor firstMonitor("Samsung","1920x1080",24,3200);
	firstMonitor.Print();

	string producer2;
	cout << "Введіть назву свого монітора: ";
	cin >> producer2;
	string resolution;
	cout << "Введіть роздільну здатність свого монітора: ";
	cin >> resolution;
	int size_diagonal;
	cout << "Введіть діагональ свого монітора: ";
	cin >> size_diagonal;
	double price;
	cout << "Введіть ціну свого монітора: ";
	cin >> price;

	Monitor secondMonitor(producer2, resolution, size_diagonal, price);
	secondMonitor.Print();

	return 0;
}