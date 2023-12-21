//Автор Богушевич Данил ВМК-22
#pragma once
#include <iostream>
#include <string>
#include <exception>
#include <cmath>

//Главный класс (предок)
class Plants {

	//Поля

protected:

	int cost; //Стоимость

	std::string sound; //звук при установки

	double health; //здоровье


public:
	//методы

	//Конструктор
	Plants();

	//Конструктор значений
	Plants(int n_cost, std::string n_sound, double n_health);

	//Геттер для стоимости(выводит значение)
	int get_cost()  const;

	//Геттер для звука постановки(выводит значение)
	std::string get_sound() const;

	//Геттер для здоровья(выводит значение)
	double get_health() const;

	//Сеттер для установки нового значения стоимости
	void set_cost(int n_cost);

	//Сеттер для установки нового значения звука устновки
	void set_sound(std::string n_sound);

	//Сеттер для установки нового значения здоровья
	void set_health(double n_health);
	
	//Виртуальная функция обьедитнения в строку
	virtual std::string cr_string() = 0;

};

//Класс стреляющих растений (потомок)
class Shoters : public Plants {
	//Поля
protected:

	int shot_per_sec; //Количество выпущенных снарядов в секунду

	double damage; //Урон наносимый за один снаряд
	
	int distance; //Растояние на которое снаряд летит

public:
	//Методы

	//Конструктор
	Shoters();

	//Конструктор с параметрами
	Shoters(int n_sps, double n_dmg, int n_dist);

	//Геттер вывода значения стрельбы в секунду
	int get_sps() const;

	//Геттер для вывода значения урона за выстрел
	double get_damage() const;

	//Геттер для вывода значения дальности
	int get_distance() const;

	//сеттер значения выстрелов в секунду
	void set_sps(int n_sps);

	//сеттер урона
	void set_damage(double n_dmg);

	//сеттер дистанции выстрела
	void set_distance(int n_dist);
	
	//обьединение значений в строку
	std::string cr_string() override;

	//нахождение урона в секунду
	double find_dps();


	
};

class ExplosionP: public Plants {

protected:

	double damageEx;//урон от взрыва

	int distanceEx;//расстояние взрыва

public:

	//конструктор
	ExplosionP();

	//конструктор значений
	ExplosionP(double n_dmg, int n_dist);

	//геттер урона от взрыва
	double get_damageEx() const;

	//геттер дистанции
	int get_distanceEx() const;

	//сеттер урона от взрыва
	void set_damageEx(double n_dmg);

	//сеттер дистанции взрыва
	void set_distanceEx(int n_dist);

	//обьединение в строку
	std::string cr_string() override ;

};