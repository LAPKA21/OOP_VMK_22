//author : Bogushevich Danil VMK - 22
#pragma once
#include <cmath> //�������������� �������
#include <stdlib.h> //��������� ��� ��� ��������� �����
#include <iostream> //��������� ��� ����������� ���������� ����� � �������
#include <fstream> // ��������� ��� ��� ������ � �������
#include<iostream> //��� ��� ����� ������
#include <exception> //��� ��� ��������� ����������
#include <vector> //��� ��� ������ � �������� (������ �������)

using namespace std;

namespace WWithA { // ������ ����������� ������������ ���� ��� W - ������, with - �, A - ���������
	//��������� ����� ������� � �������� ����������� n ���������� ����� ��������� sum
	int sum_mas(int* a, int n);

	//���������� ������� ������������ n ���������� ������� �� min �� max
	int* fill_mas(int n, int max, int min);

	//������ ������� ������������ n 
	void Output_mas(const int* a, int n);
}

namespace WWithF { // ������ ����������� ������������ ���� ��� W - ������, with - �, F - �������
	//����� ������� � ���� � �������� name
	void Input_mass_file(int* a, int n, const string& name);


	//�������� ������� ����� ���� � ��������� name
	int* Create_mass_file(const string& name, int n);
}

namespace WWithV {

	//�������� ������� arr ����������� n
	vector <int> CreateVector(const int& n, const int& min, const int& max);

	//����� ������� arr ������������ n �� ����� ������������
	void OutputVector(const vector<int>& arr);

	//����� ����� ������ ������� ����������� � �������
	int SumVec(const std::vector<int>& arr);

	//���������� �������� ����������� ������� �� ����� � ��������� name
	int Output_Size_Arr(const string& name);
}

namespace WwithT {

	template < typename T = int>
	//��������� ����� ������� � �������� ����������� n ���������� ����� ��������� sum
	T sum_masT(T* a, int n);

	template < typename T = int>
	//���������� ������� ������������ n ���������� ������� �� min �� max
	T* fill_masT(int n, int max, int min);

	template < typename T = int>
	//������ ������� ������������ n 
	void Output_masT(const T* a, int n);

	template < typename T = int>
	//����� ������� � ���� � �������� name
	void Input_mass_fileT(T* a, int n, const string& name); 

	template < typename T = int>
	//�������� ������� ����� ���� � ��������� name
	T* Create_mass_fileT(const string& name, int n); 



	template < typename T = int>
	//�������� ������� arr ����������� n
	vector <T> CreateVectorT(const int& n, const int& min, const int& max); 

	template < typename T = int>
	//����� ������� arr ������������ n �� ����� ������������
	void OutputVectorT(const vector<T>& arr);

	template < typename T = int>
	//����� ����� ������ ������� ����������� � �������
	int SumVecT(const std::vector<T>& arr);


}