﻿// Task-5.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Figure {
protected:
	int sides_count;
	std::string name;
public:
	Figure() {
		sides_count = 0;
		name = "Фигура";
	}
	int get_current_num() {
		return sides_count;
	}
	std::string get_name() {
		return name;
	}
};

class Triangle : public Figure {
public:
	Triangle() {
		sides_count = 3;
		name = "Треугольник";
	}
};

class Quadrangl : public Figure {
public:
	Quadrangl() {
		sides_count = 4;
		name = "Четырёхугольник";
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	std::cout << "Количество сторон: \n";
	Figure figure;
	std::cout << figure.get_name() << ": " << figure.get_current_num() << '\n';
	Triangle triangle;
	std::cout << triangle.get_name() << ": " << triangle.get_current_num() << '\n';
	Quadrangl quadrangl;
	std::cout << quadrangl.get_name() << ": " << quadrangl.get_current_num() << '\n';

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
