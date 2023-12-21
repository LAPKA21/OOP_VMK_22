// author: Bogushevich Danil VMK-22

#include "Plants.h"

	//Конструктор
	Plants::Plants() {

		cost = 0;

		sound = " ";

		health = 0;
	}

	//Конструктор значений
	Plants::Plants(int n_cost, std::string n_sound, double n_health) {

		cost = n_cost;

		sound = n_sound;

		health = n_health;
	}

	//Геттер для стоимости(выводит значение на экран пользователю)
	int Plants::get_cost()  const {

		return cost;
	}

	//Геттер для звука постановки(выводит значение на экран пользователю)
	std::string Plants::get_sound() const {

		return sound;
	}

	//Геттер для здоровья(выводит значение на экран пользователю)
	double Plants::get_health() const {

		return health;
	}

	//Сеттер для установки нового значения стоимости
	void Plants::set_cost(int n_cost) {

		if (n_cost >= 0)
		cost = n_cost;
		else
		{
			cost = abs(n_cost);
		}

	}


	//Сеттер для установки нового значения звука устновки
	void Plants::set_sound(std::string n_sound) {

		sound = n_sound;

	}

	//Сеттер для установки нового значения здоровья
	void Plants::set_health(double n_health) {

		if(n_health >= 0 )
		health = n_health;
		else
		{
			health = abs(n_health);
		}

	}

	//Виртуальная функция обьедитнения в строку
	std::string Plants::cr_string() {

		std::string str;

		str = "Стоимость растения = " + std::to_string(cost) + " Звук = " + sound + "Здоровье = " + std::to_string(health);

	}


	//конструктор значений 
	Shoters::Shoters(int n_sps = 0, double n_dmg = 0, int n_dist = 0) {

		shot_per_sec = n_sps;

		damage = n_dmg;

		distance = n_dist;
	}

	//геттер значения количества выпущенных зарядов в секунду (вывод значения)
	int Shoters::get_sps() const {

		return shot_per_sec;

	}

	//геттер значения урона (вывод значения)
	double Shoters::get_damage() const {

		return damage;

	}

	//геттер дистанции (вывод значения)
	int Shoters::get_distance() const {

		return distance;

	}

	//сеттер выстрелов в секунду
	void Shoters::set_sps(int n_sps) {

		if (n_sps >= 0)

			shot_per_sec = n_sps;
		else
			shot_per_sec = abs(n_sps);

	}

	//сеттер выстрелов в секунду
	void Shoters::set_damage(double n_dmg) {

		if (n_dmg >= 0)

			damage = n_dmg;
		else
			damage = abs(n_dmg);

	}

	//сеттер выстрелов в секунду
	void Shoters::set_distance(int n_dist) {

		if (n_dist >= 0)

			distance = n_dist;
		else
			distance = abs(n_dist);

	}

	//поиск урона в секунду
	double Shoters::find_dps() {

		return shot_per_sec * damage;

	}

	std::string Shoters::cr_string() {

		std::string str;

		str = "Стоимость растения = " + std::to_string(cost) + " Звук = " + sound + "Здоровье = " + std::to_string(health) + "Выстрелов в минуту = " + std::to_string(shot_per_sec) + "Урон = " + std::to_string(damage) + "Растояние = " + std::to_string(distance);

			return str;

	}



	//конструктор значений
	ExplosionP::ExplosionP(double n_dmg = 0,int n_dist = 0) {

		damageEx = n_dmg;

		distanceEx = n_dist;

	}

	//геттер урона от взрыва
	double ExplosionP::get_damageEx() const {

		return damageEx;

	}

	//геттер дистанции
	int ExplosionP::get_distanceEx() const {

		return distanceEx;

	}

	//сеттер урона от взрыва
	void ExplosionP::set_damageEx(double n_dmg) {

		if (n_dmg >= 0) {
			damageEx = n_dmg;
		}
		else
		{
			damageEx = abs(n_dmg);
		}

	}

	//сеттер дистанции взрыва
	void ExplosionP::set_distanceEx(int n_dist) {

		if (n_dist >= 0) {
			distanceEx = n_dist;
		}
		else
		{
			distanceEx = abs(n_dist);
		}
	}

	//обьединение в строку
	std::string ExplosionP::cr_string()  {

		std::string str;

		str = "Стоимость растения = " + std::to_string(cost) + " Звук = " + sound + "Здоровье = " + std::to_string(health) + " Урон от взрыва = " + std::to_string(damageEx) + " Растояние взрыва = " + std::to_string(distanceEx);

		return str;
	}
