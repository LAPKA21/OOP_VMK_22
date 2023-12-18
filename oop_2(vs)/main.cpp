//author: Bogushevich D. VMK-22


#include "arrays.h"
#include <time.h>
#include <cassert>
#include <vector>

using namespace std;
using namespace WWithA;
using namespace WWithF;
using namespace WWithV;
using namespace WwithT;

//главная функция
int main(int argc, char* argv[]) {

	int* test_mas1 = new int [4] {1, 2, 3, 4};
	int* test_mas2 = new int [4] {10, 20, 30, 40};
	int* test_mas3 = new int [4] {15, 26, 37, 43};

	//Проверка на правильнуб работу функции
	assert(abs(sum_mas(test_mas1, 4) - 30) < 0.0000001);
	assert(abs(sum_mas(test_mas2, 4) - 3000) < 0.0000001);
	assert(abs(sum_mas(test_mas3, 4) - 4119) < 0.000001);

	//Освобождение памяти от массивов для тестов
	delete[] test_mas1;
	delete[] test_mas2;
	delete[] test_mas3;

	//int* mas;
	//int* example;
	int min = 0; //минимальное значение в случайных чисел
	int max = 100; // максимальное значение случайных чисел
	int sum_arr = 0; //сумма элементов массива
	int n, m; // размерность массива
	vector<int> arr; //создание вектора

	srand(time(NULL)); //случайные числа

	setlocale(LC_ALL, "Russian");

	try {


		cout << "Input size mass = "; //Вывод сообщению пользователю что нужно ввести размер массива

		cin >> n; //получения размера массива


		//mas = fill_mas(n, max, min); // заполнение массива mas

		//Output_mas(mas, n); // вывода массива  mas

		//sum_arr = sum_mas(mas, n); // получение суммы всех элементов массива

		//Input_mass_file(mas, n, "test2.txt");// ввывод массива в файл

		//cout << "Summa massive = " << sum_arr << endl; //вывод пользователю ответа

		//cout << endl; // отделение строки

		//example = Create_mass_file("text.txt", 12); // создание массива из файла

		//Output_mas(example, 12); //спросить как из функции взять второе значение

		arr = CreateVector(n, min, max);

		OutputVector(arr);

		cout << endl;

		sum_arr = SumVec(arr);

		cout << "Сумма элементов вектора = " << sum_arr;

	}

	catch (exception& err) {

		cout << "Ошибка ---- " << err.what();
		return -1;

	}


	//Освобождение памяти
	//delete[] example;
	//delete[] mas;
	arr.clear();
}
