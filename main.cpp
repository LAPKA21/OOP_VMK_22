//author: Bogushevich D. VMK-22

#include "massive.h"
#include <time.h>

using namespace std;

//главная функция
int main(){

int* mas;
int* example;
int min = 0; //минимальное значение в случайных чисел
int max = 100; // максимальное значение случайных чисел
int sum_arr = 0; //сумма элементов массива
int n; // размерность массива

srand(time(NULL)); //случайные числа

cout << "Input size mass = "; //Вывод сообщению пользователю что нужно ввести размер массива

cin >> n; //получения размера массива

mas = fill_mas(n,max,min); // заполнение массива mas

Output_mas(mas,n); // вывода массива  mas

sum_arr = sum_mas(mas,n); // получение суммы всех элементов массива

Input_mass_file(mas,n,"test2.txt");// ввывод массива в файл

cout << "Summa massive = " << sum_arr << endl; //вывод пользователю ответа

cout << endl; // отделение строки

example = Create_mass_file("text.txt"); // создание массива из файла

Output_mas(example,12);


}