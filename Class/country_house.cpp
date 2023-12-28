//author: Bogushevich Danil VMK - 22

#include "country_house.h"


	//�����������
 CountryHouse::CountryHouse() {
		sq = 0;
		count_r = 0;
		val_sq_m = 0;
	}

	//����������� ��������
  CountryHouse::CountryHouse(double n_sq, int n_count_r, double n_val_sq_m) {

	set_sq(n_sq);
	set_count_r(n_count_r);
	set_val_sq_m(n_val_sq_m);

}

	//������ ������� (�������� ��������� �������)
    double CountryHouse::get_sq() const { //������ ��������� ��� ������ ������ ��� ��� ��� �� ����������
		return sq;
	}

	//������ ���������� ������ (�������� ��������� ���������� ������)
	int CountryHouse::get_count_r()  const { //������ ��������� ��� ������ ������ ��� ��� ��� �� ����������
		return count_r;
	}

	//������ ��������� �� ���������� ���� (�������� ��������� ��������� ��  ���������� ����)
	int CountryHouse::get_val_sq_m() const { //������ ��������� ��� ������ ������ ��� ��� ��� �� ����������
		return val_sq_m;
	}

	//������ ������� (�������� ������ ����� �������� ������� ����� ���������� new_sq)
	void CountryHouse::set_sq(double new_sq) {

		if (new_sq < 0)
			throw std::invalid_argument("������� < 0");
		else
			sq = new_sq;

	}

	//������ ���������� ������ (�������� ������ ����� �������� ���������� ������ ����� ���������� n_count_r)
	void CountryHouse::set_count_r(int n_count_r) {

		if (n_count_r < 0)
			throw std::invalid_argument("���������� ������ < 0");
		else
			count_r = n_count_r;

	}

	//������ ��������� ����������� �����  (�������� ������ ����� �������� ��������� ����������� ����� ����� ���������� n_val_sq_m)
	void CountryHouse::set_val_sq_m(double n_val_sq_m) {

		if (n_val_sq_m < 0)
			throw std::invalid_argument("��������� �� ���������� ���� < 0");
		else
			val_sq_m = n_val_sq_m;

	}

	//���������� ��������� ���� (�������� ���� �������� ��������� ���� ����� ��������� ���������� sq � val_sq_m)
	double CountryHouse::price_house() const
	{

		return  sq * val_sq_m;

	}


	//����������� ���������� ��� ������ � ������
	std::string CountryHouse::to_string() const  {

		std::string str;

		str = "������� ���� = " + std::to_string(sq) + "  ���������� ������ = " + std::to_string(count_r)  + "  ��������� �� ���������� ���� = " + std::to_string(val_sq_m) + "  ��������� ���� = " + std::to_string(price_house());

		return str;
	}



