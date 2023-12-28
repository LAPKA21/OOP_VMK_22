#pragma once

//author: Bogushevich Danil VMK - 22

#include <iostream>
#include <exception>
#include "country_house.h"
#include <string>
#include <sstream>

///������� ����������� ����� CountryHouse ������� ��������� ���������� ���
class CountryHouse
{
	//����
private: //������ �� ���� � �� ������ ������
	double sq; //�������
	int count_r; //���������� ������
	double val_sq_m; //���������� ���������� ������


public:
	//�����������
	CountryHouse();

	//����������� ������� ��������� ������ �������� �����
	 CountryHouse(double n_sq, int n_count_r, double val_sq_m);

	//������ ������� (�������� ��������� �������)
	double get_sq() const; //const - �� ������ ����� ������

	//������ ���������� ������ (�������� ��������� ���������� ������)
	int get_count_r() const; //const - �������� ��� ����� �� ������ ����� ������

	//������ ��������� �� ���������� ���� (�������� ��������� ��������� ��  ���������� ����)
	int get_val_sq_m() const; //const - �������� ��� ����� �� ������ ����� ������

	//������ ������� (�������� ������ ����� �������� ������� ����� ���������� new_sq)
	void set_sq(double new_sq);

	//������ ���������� ������ (�������� ������ ����� �������� ���������� ������ ����� ���������� n_count_r)
	void set_count_r(int n_count_r);

	//������ ��������� ����������� �����  (�������� ������ ����� �������� ��������� ����������� ����� ����� ���������� n_val_sq_m)
	void set_val_sq_m(double n_val_sq_m);

	//���������� ��������� ���� (�������� ���� �������� ��������� ���� ����� ��������� ���������� sq � val_sq_m)
	double price_house()  const; 

	std::string to_string() const;
	//���������� � ������

	

};


