// ConsoleApplication12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class TPen {
private:
	string FColor;
public:
	TPen() {}
	string GetColor() {
		return FColor;
	}
	void SetColor(string color) {
		FColor = color;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	const int SIZE = 5;
	TPen pens[SIZE];
	ifstream fin("color.txt");
	if (!fin) {
		cout << "Файл не обнаружен!" << endl;
		return 1;
	}

	int i = 0;
	while (!fin.eof() && i < SIZE) {
		string temp;
		getline(fin, temp);
		pens[i].SetColor(temp);
		i++;
	}
	fin.close();

	for (int j = 0; j < SIZE; j++) {
		cout << "Color: " << pens[j].GetColor() << endl;
	}

	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
