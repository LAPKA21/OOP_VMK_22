//author : Bogushevich Danil VMK - 22
#pragma once
#include <cmath> //математические функции
#include <stdlib.h> //вставляем код для случайных чисел
#include <iostream> //Вставляем код стандартной библиотеки ввода и ввывода
#include <fstream> // Вставляем код для работы с файлами
#include<iostream> //код для ввода вывода
#include <exception> //код для обработки исключений
#include <vector> //код для работы с вектором (замена массива)

using namespace std;

namespace WWithA { // создаю собственное пространство имен для W - работы, with - с, A - массивами
	//Получение суммы массива в квадрате размерность n возвращает сумму элементов sum
	int sum_mas(int* a, int n);

	//Заполнение массива размерностью n случайными числами от min до max
	int* fill_mas(int n, int max, int min);

	//Вывода массива размерностью n 
	void Output_mas(const int* a, int n);
}

namespace WWithF { // создаю собственное пространство имен для W - работы, with - с, F - файлами
	//Вывод массива в файл с название name
	void Input_mass_file(int* a, int n, const string& name);


	//Создание массива через файл с названием name
	int* Create_mass_file(const string& name, int n);
}

namespace WWithV {

	//Создание вектора arr размерность n
	vector <int> CreateVector(const int& n, const int& min, const int& max);

	//Вывод вектора arr размерностью n на экран пользователю
	void OutputVector(const vector<int>& arr);

	//Поиск суммы членов вектора возведенных в квадрат
	int SumVec(const std::vector<int>& arr);

	//Возвращает значения размерности массива из файла с названием name
	int Output_Size_Arr(const string& name);
}

namespace WwithT {

	template < typename T = int>
	//Получение суммы массива в квадрате размерность n возвращает сумму элементов sum
	T sum_masT(T* a, int n);

	template < typename T = int>
	//Заполнение массива размерностью n случайными числами от min до max
	T* fill_masT(int n, int max, int min);

	template < typename T = int>
	//Вывода массива размерностью n 
	void Output_masT(const T* a, int n);

	template < typename T = int>
	//Вывод массива в файл с название name
	void Input_mass_fileT(T* a, int n, const string& name); 

	template < typename T = int>
	//Создание массива через файл с названием name
	T* Create_mass_fileT(const string& name, int n); 



	template < typename T = int>
	//Создание вектора arr размерность n
	vector <T> CreateVectorT(const int& n, const int& min, const int& max); 

	template < typename T = int>
	//Вывод вектора arr размерностью n на экран пользователю
	void OutputVectorT(const vector<T>& arr);

	template < typename T = int>
	//Поиск суммы членов вектора возведенных в квадрат
	int SumVecT(const std::vector<T>& arr);


}