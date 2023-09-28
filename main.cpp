//author: Bogushevich D. VMK-22
#include <iostream>
#include <cmath> // вставляем код с математическими функциями
#include <stdlib.h> //вставляем код для случайных чисел
#include <time.h>


using namespace std;

//главная функция
int main(){

int min = 0; //минимальное значение в случайных чисел
int max = 100; // максимальное значение случайных чисел
int sum_mas = 0; //сумма элементов массива
int n; // размерность массива

srand(time(NULL)); //использования времени для получения при каждом запуске новых значений

cout << "Input size mass = "; //Вывод сообщению пользователю что нужно ввести размер массива

cin >> n; //получения размера массива

int *a = new int [n]; //выделение памяти для массива размерностью n

for (unsigned i = 0; i < n; i++) //цикл заполнения массива

	a[i] = min + rand() % ( max + min + 1) ; //специальная формула

for (unsigned i = 0; i < n; i++) //цикл вывода массива

	cout << "a[" << i <<"]" << " = " << a[i] << endl;


for (unsigned i = 0; i < n; i++)// цикл получения суммы элементов массива в квадрате

	sum_mas = pow(a[i],2) + sum_mas;

cout << "Summa massive = " << sum_mas << endl; //вывод пользователю ответа


}