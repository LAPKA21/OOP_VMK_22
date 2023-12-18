//Author: Bogushevich Danil VMK - 22;

#include "arrays.h"//������������ ���� ����������� �������
//
namespace WWithA {

	//��������� ����� ������� � �������� ����������� n ���������� ����� ��������� sum
	int sum_mas(int* a, int n) {

		int sum = 0; //����������� �������� �� ���������

		if (a == nullptr) { //�������� �� ������������ �������

			throw std::invalid_argument("��������� ������!!");
		}

		else {


			for (unsigned i = 0; i < n; i++) // ���� ��������� ����� ��������� ������� � ��������

				sum = pow(a[i], 2) + sum;  //�������� ��������� � ��������

			return sum;
		}

	}

	//���������� ������� ������������ n ���������� ������� �� min �� max
	int* fill_mas(int n, int max, int min) {

		int* a = new int[n]; //��������� ������ ��� ������� ������������ n

		for (unsigned i = 0; i < n; i++) // ���� ����������

			a[i] = min + rand() % (max + min + 1); //���������� �������� ������� �������� ������ �� �������

		return a; //���������� ����� �� ������

	}

	//������ ������� ������������ n 
	void Output_mas(const int* a, int n) {

		if (a == nullptr) { //�������� �� ������������ �������

			throw std::invalid_argument("��������� ������!!");
		}

		else {


			for (unsigned i = 0; i < n; i++) // ���� ������ ���������

				cout << "a[" << i << "]" << " = " << a[i] << endl;

		}

	}
}

namespace WWithF {

	//���������� �������� ����������� ������� �� ����� � ��������� name
	int Output_Size_Arr(const string& name) {

		int n;

		ifstream f; //������� ������ ��� ��������� ������ �� �����

		f.open(name); // ��������� ����

		if (f.is_open()) // ��������� �������� �� ���� � ����� ���������
		{

			f >> n; //���������� ����������� �� ����� � n 

			return n; //���������� n

		}


		else throw std::invalid_argument("������������ ��� �����!");
	}




	//����� ������� � ���� � �������� name
	void Input_mass_file(int* a, int n, const string& name) {


		ofstream f; //������� ������ ��� ������ � ����

		f.open(name);//�������� ����� ��� ������

		if (f.is_open()) //�������� �������� �� ����
		{

			f << n; //������ ����������� �������
			f << endl;//��������� �� ���������

			for (unsigned i = 0; i < n; i++) {

				f << a[i]; //������ � ������ �������� �������

				f << "\n"; // ������� �� ����� ������

			}

		}

		else

			throw std::invalid_argument("���� �� �����������"); //���� ���� �� �������� ������� �� ����� ������������ ��������� �� ������

		f.close(); // ��������� ����

	}

	//�������� ������� ����� ���� � ��������� name
	int* Create_mass_file(const string& name, int n) {

		int* a = nullptr; // �������� ��������� �� ������ ������������� �������

		ifstream f; //������� ������ ��� ������ � ����

		f.open(name); //�������� ���� 

		if (f.is_open()) // �������� ���� ����������� �� ��
		{

			f >> n; //��������� ����������� �������

			a = new int[n]; //��������� ������

			for (unsigned i = 0; i < n; i++)
			{

				f >> a[i]; // ������ ��������� ������� �� �����

			}

		}

		else

			throw std::invalid_argument("���� �� �����������"); // ���� ���� �� �������� ������� ������������ ��������� �� ������

		f.close(); //�������� ����

		return a; // ��������� ��������� �� ������

	}

}
	//������������ ���� ��� ������ � ���������
	namespace WWithV {

		//�������� ������� arr ����������� n
		vector <int> CreateVector(const int& n, const int& min, const int& max) {

			vector<int> arr; //������ ������
			if (n > 0) {


				for (unsigned i = 0; i < n; i++)
					arr.push_back(min + rand() % (max + min + 1)); //���������� ������� �� ������� min - ����������� �������� max - ������������� �������
				return arr; //���������� ������ arr
			}

			else
			{
				throw std::invalid_argument("������� ���������� ����� ��������� �������");
			}

		}


		//����� ������� arr ������������ n �� ����� ������������
		void OutputVector(const vector<int>& arr) {

			for (unsigned i = 0; i < arr.size(); i++)
				cout << arr[i] << endl;
		}

		//����� ����� ������ ������� ����������� � �������
		int SumVec(const std::vector<int>& arr) {
			int sum = 0;

			for (unsigned i = 0; i < arr.size(); i++)
				sum = pow(arr[i], 2) + sum;
			return sum;
		}
	}


	namespace WwithT {


		template < typename T = int>
			//��������� ����� ������� � �������� ����������� n ���������� ����� ��������� sum
			T sum_masT(T* a, int n) {

				int sum = 0; //����������� �������� �� ���������

				if (a == nullptr) { //�������� �� ������������ �������

					throw std::invalid_argument("��������� ������!!");
				}

				else {


					for (unsigned i = 0; i < n; i++) // ���� ��������� ����� ��������� ������� � ��������

						sum = pow(a[i], 2) + sum;  //�������� ��������� � ��������

					return sum;
				}

			}

			template < typename T = int>
			//���������� ������� ������������ n ���������� ������� �� min �� max
			T* fill_masT(int n, int max, int min) {

				T* a = new T[n]; //��������� ������ ��� ������� ������������ n

				for (unsigned i = 0; i < n; i++) // ���� ����������

					a[i] = min + rand() % (max + min + 1); //���������� �������� ������� �������� ������ �� �������

				return a; //���������� ����� �� ������

			}

			template < typename T = int>
			//������ ������� ������������ n 
			void Output_masT(const T* a, int n) {

				if (a == nullptr) { //�������� �� ������������ �������

					throw std::invalid_argument("��������� ������!!");
				}

				else {


					for (unsigned i = 0; i < n; i++) // ���� ������ ���������

						cout << "a[" << i << "]" << " = " << a[i] << endl;

				}

			}

			template < typename T = int>
			//����� ������� � ���� � �������� name
			void Input_mass_fileT(T* a, int n, const string& name) {


				ofstream f; //������� ������ ��� ������ � ����

				f.open(name);//�������� ����� ��� ������

				if (f.is_open()) //�������� �������� �� ����
				{

					f << n; //������ ����������� �������
					f << endl;//��������� �� ���������

					for (unsigned i = 0; i < n; i++) {

						f << a[i]; //������ � ������ �������� �������

						f << "\n"; // ������� �� ����� ������

					}

				}

				else

					throw std::invalid_argument("���� �� �����������"); //���� ���� �� �������� ������� �� ����� ������������ ��������� �� ������

				f.close(); // ��������� ����

			}

			template < typename T = int>
			//�������� ������� ����� ���� � ��������� name
			T* Create_mass_fileT(const string& name, int n) {

				T* a = nullptr; // �������� ��������� �� ������ ������������� �������

				ifstream f; //������� ������ ��� ������ � ����

				f.open(name); //�������� ���� 

				if (f.is_open()) // �������� ���� ����������� �� ��
				{

					f >> n; //��������� ����������� �������

					a = new T[n]; //��������� ������

					for (unsigned i = 0; i < n; i++)
					{

						f >> a[i]; // ������ ��������� ������� �� �����

					}

				}

				else

					throw std::invalid_argument("���� �� �����������"); // ���� ���� �� �������� ������� ������������ ��������� �� ������

				f.close(); //�������� ����

				return a; // ��������� ��������� �� ������

			}



			template < typename T = int>
			//�������� ������� arr ����������� n
			vector <T> CreateVectorT(const int& n, const int& min, const int& max) {

				vector<T> arr; //������ ������
				if (n > 0) {


					for (unsigned i = 0; i < n; i++)
						arr.push_back(min + rand() % (max + min + 1)); //���������� ������� �� ������� min - ����������� �������� max - ������������� �������
					return arr; //���������� ������ arr
				}

				else
				{
					throw std::invalid_argument("������� ���������� ����� ��������� �������");
				}

			}

			template < typename T = int>
			//����� ������� arr ������������ n �� ����� ������������
			void OutputVectorT(const vector<T>& arr) {

				for (unsigned i = 0; i < arr.size(); i++)
					cout << arr[i] << endl;
			}

			template < typename T = int>
			//����� ����� ������ ������� ����������� � �������
			int SumVecT(const std::vector<T>& arr) {
				int sum = 0;

				for (unsigned i = 0; i < arr.size(); i++)
					sum = pow(arr[i], 2) + sum;
				return sum;
			}

		
	}

		











		











	



