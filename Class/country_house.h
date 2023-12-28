#pragma once

//author: Bogushevich Danil VMK - 22

#include <iostream>
#include <exception>
#include "country_house.h"
#include <string>
#include <sstream>

///Создаем собственный класс CountryHouse который описывает загородный дом
class CountryHouse
{
	//поля
private: //скрыты от всех и их нельзя менять
	double sq; //площадь
	int count_r; //количество комнат
	double val_sq_m; //количество квадратных метров


public:
	//Конструктор
	CountryHouse();

	//Конструктор который позволяет задать значение сразу
	 CountryHouse(double n_sq, int n_count_r, double val_sq_m);

	//геттер площади (операция прочтения площади)
	double get_sq() const; //const - не меняет полей класса

	//геттер количества комнат (операция прочтения количества комнат)
	int get_count_r() const; //const - означает что метод не меняет полей класса

	//геттер стоимости за квадратный метр (операция прочтения стоимости за  квадратный метр)
	int get_val_sq_m() const; //const - означает что метод не меняет полей класса

	//сеттер площади (операция задает новое значение площади через переменную new_sq)
	void set_sq(double new_sq);

	//сеттер количества комнат (операция задает новое значение количества комнат через переменную n_count_r)
	void set_count_r(int n_count_r);

	//сеттер стоимости квадратного метра  (операция задает новое значение стоимости квадратного метра через переменную n_val_sq_m)
	void set_val_sq_m(double n_val_sq_m);

	//Вычисление стоимости дома (операция ищет значение стоимости дома через умножение переменных sq и val_sq_m)
	double price_house()  const; 

	std::string to_string() const;
	//склеивание в строку

	

};


