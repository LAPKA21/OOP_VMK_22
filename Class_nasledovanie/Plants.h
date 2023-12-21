//����� ��������� ����� ���-22
#pragma once
#include <iostream>
#include <string>
#include <exception>
#include <cmath>

//������� ����� (������)
class Plants {

	//����

protected:

	int cost; //���������

	std::string sound; //���� ��� ���������

	double health; //��������


public:
	//������

	//�����������
	Plants();

	//����������� ��������
	Plants(int n_cost, std::string n_sound, double n_health);

	//������ ��� ���������(������� ��������)
	int get_cost()  const;

	//������ ��� ����� ����������(������� ��������)
	std::string get_sound() const;

	//������ ��� ��������(������� ��������)
	double get_health() const;

	//������ ��� ��������� ������ �������� ���������
	void set_cost(int n_cost);

	//������ ��� ��������� ������ �������� ����� ��������
	void set_sound(std::string n_sound);

	//������ ��� ��������� ������ �������� ��������
	void set_health(double n_health);
	
	//����������� ������� ������������ � ������
	virtual std::string cr_string() = 0;

};

//����� ���������� �������� (�������)
class Shoters : public Plants {
	//����
protected:

	int shot_per_sec; //���������� ���������� �������� � �������

	double damage; //���� ��������� �� ���� ������
	
	int distance; //��������� �� ������� ������ �����

public:
	//������

	//�����������
	Shoters();

	//����������� � �����������
	Shoters(int n_sps, double n_dmg, int n_dist);

	//������ ������ �������� �������� � �������
	int get_sps() const;

	//������ ��� ������ �������� ����� �� �������
	double get_damage() const;

	//������ ��� ������ �������� ���������
	int get_distance() const;

	//������ �������� ��������� � �������
	void set_sps(int n_sps);

	//������ �����
	void set_damage(double n_dmg);

	//������ ��������� ��������
	void set_distance(int n_dist);
	
	//����������� �������� � ������
	std::string cr_string() override;

	//���������� ����� � �������
	double find_dps();


	
};

class ExplosionP: public Plants {

protected:

	double damageEx;//���� �� ������

	int distanceEx;//���������� ������

public:

	//�����������
	ExplosionP();

	//����������� ��������
	ExplosionP(double n_dmg, int n_dist);

	//������ ����� �� ������
	double get_damageEx() const;

	//������ ���������
	int get_distanceEx() const;

	//������ ����� �� ������
	void set_damageEx(double n_dmg);

	//������ ��������� ������
	void set_distanceEx(int n_dist);

	//����������� � ������
	std::string cr_string() override ;

};