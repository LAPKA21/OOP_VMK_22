// author: Bogushevich Danil VMK-22

#include "Plants.h"

	//�����������
	Plants::Plants() {

		cost = 0;

		sound = " ";

		health = 0;
	}

	//����������� ��������
	Plants::Plants(int n_cost, std::string n_sound, double n_health) {

		cost = n_cost;

		sound = n_sound;

		health = n_health;
	}

	//������ ��� ���������(������� �������� �� ����� ������������)
	int Plants::get_cost()  const {

		return cost;
	}

	//������ ��� ����� ����������(������� �������� �� ����� ������������)
	std::string Plants::get_sound() const {

		return sound;
	}

	//������ ��� ��������(������� �������� �� ����� ������������)
	double Plants::get_health() const {

		return health;
	}

	//������ ��� ��������� ������ �������� ���������
	void Plants::set_cost(int n_cost) {

		if (n_cost >= 0)
		cost = n_cost;
		else
		{
			cost = abs(n_cost);
		}

	}


	//������ ��� ��������� ������ �������� ����� ��������
	void Plants::set_sound(std::string n_sound) {

		sound = n_sound;

	}

	//������ ��� ��������� ������ �������� ��������
	void Plants::set_health(double n_health) {

		if(n_health >= 0 )
		health = n_health;
		else
		{
			health = abs(n_health);
		}

	}

	//����������� ������� ������������ � ������
	std::string Plants::cr_string() {

		std::string str;

		str = "��������� �������� = " + std::to_string(cost) + " ���� = " + sound + "�������� = " + std::to_string(health);

	}


	//����������� �������� 
	Shoters::Shoters(int n_sps = 0, double n_dmg = 0, int n_dist = 0) {

		shot_per_sec = n_sps;

		damage = n_dmg;

		distance = n_dist;
	}

	//������ �������� ���������� ���������� ������� � ������� (����� ��������)
	int Shoters::get_sps() const {

		return shot_per_sec;

	}

	//������ �������� ����� (����� ��������)
	double Shoters::get_damage() const {

		return damage;

	}

	//������ ��������� (����� ��������)
	int Shoters::get_distance() const {

		return distance;

	}

	//������ ��������� � �������
	void Shoters::set_sps(int n_sps) {

		if (n_sps >= 0)

			shot_per_sec = n_sps;
		else
			shot_per_sec = abs(n_sps);

	}

	//������ ��������� � �������
	void Shoters::set_damage(double n_dmg) {

		if (n_dmg >= 0)

			damage = n_dmg;
		else
			damage = abs(n_dmg);

	}

	//������ ��������� � �������
	void Shoters::set_distance(int n_dist) {

		if (n_dist >= 0)

			distance = n_dist;
		else
			distance = abs(n_dist);

	}

	//����� ����� � �������
	double Shoters::find_dps() {

		return shot_per_sec * damage;

	}

	std::string Shoters::cr_string() {

		std::string str;

		str = "��������� �������� = " + std::to_string(cost) + " ���� = " + sound + "�������� = " + std::to_string(health) + "��������� � ������ = " + std::to_string(shot_per_sec) + "���� = " + std::to_string(damage) + "��������� = " + std::to_string(distance);

			return str;

	}



	//����������� ��������
	ExplosionP::ExplosionP(double n_dmg = 0,int n_dist = 0) {

		damageEx = n_dmg;

		distanceEx = n_dist;

	}

	//������ ����� �� ������
	double ExplosionP::get_damageEx() const {

		return damageEx;

	}

	//������ ���������
	int ExplosionP::get_distanceEx() const {

		return distanceEx;

	}

	//������ ����� �� ������
	void ExplosionP::set_damageEx(double n_dmg) {

		if (n_dmg >= 0) {
			damageEx = n_dmg;
		}
		else
		{
			damageEx = abs(n_dmg);
		}

	}

	//������ ��������� ������
	void ExplosionP::set_distanceEx(int n_dist) {

		if (n_dist >= 0) {
			distanceEx = n_dist;
		}
		else
		{
			distanceEx = abs(n_dist);
		}
	}

	//����������� � ������
	std::string ExplosionP::cr_string()  {

		std::string str;

		str = "��������� �������� = " + std::to_string(cost) + " ���� = " + sound + "�������� = " + std::to_string(health) + " ���� �� ������ = " + std::to_string(damageEx) + " ��������� ������ = " + std::to_string(distanceEx);

		return str;
	}
