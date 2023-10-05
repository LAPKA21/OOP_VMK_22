//author : Bogushevich Danil VMK - 22

using namespace std;

///Получение суммы массива в квадрате размерность n возвращает сумму элементов sum
int sum_mas (int* mas, int n);

///Заполнение массива размерностью n случайными числами от min до max
int* fill_mas(int n, int max, int min);

///Вывода массива размерностью n 
void Output_mas(int *a, int n);

///Вывод массива в файл с названием name
void Input_mass_file(int* a, int n, const string& name);

///Создание массива через файл с названием name
int* Create_mass_file(const string& name);
