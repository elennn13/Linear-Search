// Template.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Линейный поиск элемента в массиве.

#include <iostream>

//  ВЫВОД МАССИВА В КОНСОЛЬ
template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }\n";
}



//  ФУНКЦИЯ ЛИНЕЙНОГО ПОИСКА ПЕРВОГО
//  ВХОЖДЕНИЯ ЗНАЧЕНИЯ key В МАССИВ arr
//  НАЧИНАЯ С ПОЗИЦИИ begin
template <typename T>
int search_index(T arr[], const int length, T key, int begin = 0) {
	for (int i = begin; i < length; i++)
		if (arr[i] == key)
			return i;
	return -1;
}


//  ФУНКЦИЯ ЛИНЕЙНОГО ПОИСКА ПОСЛЕДНЕГО
//  ВХОЖДЕНИЯ ЗНАЧЕНИЯ key В МАССИВ arr
//
template <typename T>
int search_last_index(T arr[], const int length, T key) {
	for (int i = length - 1; i >= 0; i--)
		if (arr[i] == key)
			return i;
	return -1;

}

//  ФУНКЦИЯ ЛИНЕЙНОГО ПОИСКА ПОСЛЕДНЕГО
//  ВХОЖДЕНИЯ ЗНАЧЕНИЯ key В МАССИВ arr
//
template <typename T>
int search_last_index(T arr[], const int length, T key, int begin) {
	for (int i = int begin - 1; i >= 0; i--)
		if (arr[i] == key)
			return i;
	return -1;

}


int main()
{
	setlocale(LC_ALL,"ru");
	int n;

	const int size = 10;
	int arr[size]{ 5,20,10,8,5,20,7,8,20,1 };
	std::cout << "Массив:\n";
	print_arr(arr, size);
	


	std::cout << "Введите число для поиска -> ";
	std::cin >> n;


	int index = search_index(arr, size, n);

	if(index !=-1)
	    std::cout << "Позиция числа индекс: " << index << std::endl;
	else
		std::cout << "Числа нет в массиве.\n " ;




	int last_index = search_last_index(arr, size, n);

	if (last_index != -1)
		std::cout << "Позиция числа индекс: " << last_index << std::endl;
	else
		std::cout << "Числа нет в массиве.\n ";






	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
