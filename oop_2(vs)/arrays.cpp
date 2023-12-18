//Author: Bogushevich Danil VMK - 22;

#include "arrays.h"//Заголовочный файл собственных функций
//
namespace WWithA {

	//Получение суммы массива в квадрате размерность n возвращает сумму элементов sum
	int sum_mas(int* a, int n) {

		int sum = 0; //присваеваем значение по умолчанию

		if (a == nullptr) { //проверка на заполненость массива

			throw std::invalid_argument("Заполните массив!!");
		}

		else {


			for (unsigned i = 0; i < n; i++) // цикл получения суммы элементов массива в квадрате

				sum = pow(a[i], 2) + sum;  //Сложение элементов в квадрате

			return sum;
		}

	}

	//Заполнение массива размерностью n случайными числами от min до max
	int* fill_mas(int n, int max, int min) {

		int* a = new int[n]; //выделение памяти для массива размерностью n

		for (unsigned i = 0; i < n; i++) // цикл заполнения

			a[i] = min + rand() % (max + min + 1); //Заполнение элемента массива случаным числом по формуле

		return a; //Возвращает адрес на массив

	}

	//Вывода массива размерностью n 
	void Output_mas(const int* a, int n) {

		if (a == nullptr) { //проверка на заполненость массива

			throw std::invalid_argument("Заполните массив!!");
		}

		else {


			for (unsigned i = 0; i < n; i++) // цикл вывода элементов

				cout << "a[" << i << "]" << " = " << a[i] << endl;

		}

	}
}

namespace WWithF {

	//Возвращает значения размерности массива из файла с названием name
	int Output_Size_Arr(const string& name) {

		int n;

		ifstream f; //создаем объект для вынесение данных из файла

		f.open(name); // открываем файл

		if (f.is_open()) // Проверяем открылся ли файл с таким названием
		{

			f >> n; //Записываем размерность из файла в n 

			return n; //Возвращаем n

		}


		else throw std::invalid_argument("Неправильное имя файла!");
	}




	//Вывод массива в файл с название name
	void Input_mass_file(int* a, int n, const string& name) {


		ofstream f; //Создаем объект для записи в файл

		f.open(name);//открытие файла для работы

		if (f.is_open()) //проверка открылся ли файл
		{

			f << n; //запись размерности массива
			f << endl;//отделение от элементов

			for (unsigned i = 0; i < n; i++) {

				f << a[i]; //запись в строку элемента массива

				f << "\n"; // переход на новую строку

			}

		}

		else

			throw std::invalid_argument("Файл не открывается"); //если файл не открылся выводит на экран пользователю сообщение об ошибке

		f.close(); // закрывает файл

	}

	//Создание массива через файл с названием name
	int* Create_mass_file(const string& name, int n) {

		int* a = nullptr; // создание указателя на начало динамического массива

		ifstream f; //Создаем объект для записи в файл

		f.open(name); //открываю файл 

		if (f.is_open()) // проверяю файл открывается ли он
		{

			f >> n; //получения размерности массива

			a = new int[n]; //выделение памяти

			for (unsigned i = 0; i < n; i++)
			{

				f >> a[i]; // запись элементов массива из файла

			}

		}

		else

			throw std::invalid_argument("Файл не открывается"); // если файл не открылся выводит пользователю сообщение об ошибке

		f.close(); //закрываю файл

		return a; // возвращаю указатель на массив

	}

}
	//Простарнство имен для работы с векторами
	namespace WWithV {

		//Создание вектора arr размерность n
		vector <int> CreateVector(const int& n, const int& min, const int& max) {

			vector<int> arr; //создал вектор
			if (n > 0) {


				for (unsigned i = 0; i < n; i++)
					arr.push_back(min + rand() % (max + min + 1)); //Заполнение вектора по формуле min - минимальное значение max - максимальноое значние
				return arr; //Возвращает вектор arr
			}

			else
			{
				throw std::invalid_argument("Введите правильное число элементов массива");
			}

		}


		//Вывод вектора arr размерностью n на экран пользователю
		void OutputVector(const vector<int>& arr) {

			for (unsigned i = 0; i < arr.size(); i++)
				cout << arr[i] << endl;
		}

		//Поиск суммы членов вектора возведенных в квадрат
		int SumVec(const std::vector<int>& arr) {
			int sum = 0;

			for (unsigned i = 0; i < arr.size(); i++)
				sum = pow(arr[i], 2) + sum;
			return sum;
		}
	}


	namespace WwithT {


		template < typename T = int>
			//Получение суммы массива в квадрате размерность n возвращает сумму элементов sum
			T sum_masT(T* a, int n) {

				int sum = 0; //присваеваем значение по умолчанию

				if (a == nullptr) { //проверка на заполненость массива

					throw std::invalid_argument("Заполните массив!!");
				}

				else {


					for (unsigned i = 0; i < n; i++) // цикл получения суммы элементов массива в квадрате

						sum = pow(a[i], 2) + sum;  //Сложение элементов в квадрате

					return sum;
				}

			}

			template < typename T = int>
			//Заполнение массива размерностью n случайными числами от min до max
			T* fill_masT(int n, int max, int min) {

				T* a = new T[n]; //выделение памяти для массива размерностью n

				for (unsigned i = 0; i < n; i++) // цикл заполнения

					a[i] = min + rand() % (max + min + 1); //Заполнение элемента массива случаным числом по формуле

				return a; //Возвращает адрес на массив

			}

			template < typename T = int>
			//Вывода массива размерностью n 
			void Output_masT(const T* a, int n) {

				if (a == nullptr) { //проверка на заполненость массива

					throw std::invalid_argument("Заполните массив!!");
				}

				else {


					for (unsigned i = 0; i < n; i++) // цикл вывода элементов

						cout << "a[" << i << "]" << " = " << a[i] << endl;

				}

			}

			template < typename T = int>
			//Вывод массива в файл с название name
			void Input_mass_fileT(T* a, int n, const string& name) {


				ofstream f; //Создаем объект для записи в файл

				f.open(name);//открытие файла для работы

				if (f.is_open()) //проверка открылся ли файл
				{

					f << n; //запись размерности массива
					f << endl;//отделение от элементов

					for (unsigned i = 0; i < n; i++) {

						f << a[i]; //запись в строку элемента массива

						f << "\n"; // переход на новую строку

					}

				}

				else

					throw std::invalid_argument("Файл не открывается"); //если файл не открылся выводит на экран пользователю сообщение об ошибке

				f.close(); // закрывает файл

			}

			template < typename T = int>
			//Создание массива через файл с названием name
			T* Create_mass_fileT(const string& name, int n) {

				T* a = nullptr; // создание указателя на начало динамического массива

				ifstream f; //Создаем объект для записи в файл

				f.open(name); //открываю файл 

				if (f.is_open()) // проверяю файл открывается ли он
				{

					f >> n; //получения размерности массива

					a = new T[n]; //выделение памяти

					for (unsigned i = 0; i < n; i++)
					{

						f >> a[i]; // запись элементов массива из файла

					}

				}

				else

					throw std::invalid_argument("Файл не открывается"); // если файл не открылся выводит пользователю сообщение об ошибке

				f.close(); //закрываю файл

				return a; // возвращаю указатель на массив

			}



			template < typename T = int>
			//Создание вектора arr размерность n
			vector <T> CreateVectorT(const int& n, const int& min, const int& max) {

				vector<T> arr; //создал вектор
				if (n > 0) {


					for (unsigned i = 0; i < n; i++)
						arr.push_back(min + rand() % (max + min + 1)); //Заполнение вектора по формуле min - минимальное значение max - максимальноое значние
					return arr; //Возвращает вектор arr
				}

				else
				{
					throw std::invalid_argument("Введите правильное число элементов массива");
				}

			}

			template < typename T = int>
			//Вывод вектора arr размерностью n на экран пользователю
			void OutputVectorT(const vector<T>& arr) {

				for (unsigned i = 0; i < arr.size(); i++)
					cout << arr[i] << endl;
			}

			template < typename T = int>
			//Поиск суммы членов вектора возведенных в квадрат
			int SumVecT(const std::vector<T>& arr) {
				int sum = 0;

				for (unsigned i = 0; i < arr.size(); i++)
					sum = pow(arr[i], 2) + sum;
				return sum;
			}

		
	}

		











		











	



