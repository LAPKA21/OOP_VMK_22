//author: Bogushevich Danil VMK - 22

#include "country_house.h"


	// онструктор
 CountryHouse::CountryHouse() {
		sq = 0;
		count_r = 0;
		val_sq_m = 0;
	}

	// онструктор значений
  CountryHouse::CountryHouse(double n_sq, int n_count_r, double n_val_sq_m) {

	set_sq(n_sq);
	set_count_r(n_count_r);
	set_val_sq_m(n_val_sq_m);

}

	//геттер площади (операци€ прочтени€ площади)
    double CountryHouse::get_sq() const { //«адает константу дл€ метода класса так как она не измен€етс€
		return sq;
	}

	//геттер количества комнат (операци€ прочтени€ количества комнат)
	int CountryHouse::get_count_r()  const { //«адает константу дл€ метода класса так как она не измен€етс€
		return count_r;
	}

	//геттер стоимости за квадратный метр (операци€ прочтени€ стоимости за  квадратный метр)
	int CountryHouse::get_val_sq_m() const { //«адает константу дл€ метода класса так как она не измен€етс€
		return val_sq_m;
	}

	//сеттер площади (операци€ задает новое значение площади через переменную new_sq)
	void CountryHouse::set_sq(double new_sq) {

		if (new_sq < 0)
			throw std::invalid_argument("ѕлощадь < 0");
		else
			sq = new_sq;

	}

	//сеттер количества комнат (операци€ задает новое значение количества комнат через переменную n_count_r)
	void CountryHouse::set_count_r(int n_count_r) {

		if (n_count_r < 0)
			throw std::invalid_argument(" оличество комнат < 0");
		else
			count_r = n_count_r;

	}

	//сеттер стоимости квадратного метра  (операци€ задает новое значение стоимости квадратного метра через переменную n_val_sq_m)
	void CountryHouse::set_val_sq_m(double n_val_sq_m) {

		if (n_val_sq_m < 0)
			throw std::invalid_argument("—тоимость за квадратный метр < 0");
		else
			val_sq_m = n_val_sq_m;

	}

	//¬ычисление стоимости дома (операци€ ищет значение стоимости дома через умножение переменных sq и val_sq_m)
	double CountryHouse::price_house() const
	{

		return  sq * val_sq_m;

	}


	//ќбьединение переменных дл€ вывода в строку
	std::string CountryHouse::to_string() const  {

		std::string str;

		str = "ѕлощадь дома = " + std::to_string(sq) + "   оличество комнат = " + std::to_string(count_r)  + "  —тоимость за квадратный метр = " + std::to_string(val_sq_m) + "  —тоимость дома = " + std::to_string(price_house());

		return str;
	}



