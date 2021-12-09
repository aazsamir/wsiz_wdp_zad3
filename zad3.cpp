#include <iostream>
#include <ctime>
#include <string>

using namespace std;

void print_r(int* tab, int n)
{
	cout << "tab = [" << endl;
	for (short i = 0; i < n; i++) {
		cout << "\t" << tab[i] << "," << endl;
	}
	cout << "]" << endl;
}

void print_matrix(int *tab, int n)
{
	cout << "matrix = [" << endl;
	for (short i = 0; i < n; i++) {
		for (short ii = 0; ii < n; ii++) {
			cout << "\t" << *((tab + i * n) + ii) << "\t|";
		}
		cout << endl;
	}
	cout << "]" << endl;
}

int random(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}

int main()
{
	srand(time(NULL));
	
	const int n = 10;
	int arr[n] = { 0 };
	int tab[10];
	int a = 0;
	const int start = -23;
	const int end = 50;
	int max = 0;
	int min = 0;
	int first;
	int second;
	const int length = 4;
	int arr6[20];

	
	cout << "********Zadanie 1************!" << endl;
	// int tab[10];
	for (short i = 0; i < 10; i++) {
		tab[i] = 3 * (i + 1);
	}
	print_r(tab, sizeof(tab) / sizeof(tab[0]));

	cout << "********Zadanie 2************!" << endl;
	for (short i = 0; i < 10; i++) {
		tab[i] = 3 * (i + 1);
		if (i % 2) {
			cout << tab[i] << ", ";
		}
	}
	cout << endl;

	cout << "********Zadanie 3************!" << endl;
	// int a = 0;
	cout << "Podaj a: ";
	cin >> a;
	arr[n - 1] = a;
	for (short i = n - 2; i >= 0; i--) {
		arr[i] = arr[i + 1] - 5;
	}
	print_r(arr, n);

	cout << "********Zadanie 4************!" << endl;
	// const int start = -23;
	// const int end = 50;
	for (short i = 0; i < n; i++) {
		arr[i] = random(start, end);
	}
	max = arr[0];
	min = max;
	for (short i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	print_r(arr, n);
	cout << "min = " << min << endl;
	cout << "max = " << max << endl;

	cout << "********Zadanie 5************!" << endl;
	cout << "podaj pierwszy element tablicy: ";
	cin >> first;
	arr[0] = first;
	cout << "podaj drugi element tablicy: ";
	cin >> second;
	arr[1] = second;
	for (short i = 2; i < n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	print_r(arr, n);

	cout << "********Zadanie 6************!" << endl;
	// int arr6[20];
	for (short i = 0; i < 10; i++) {
		arr6[i] = random(0, 10);
	}
	for (short i = 0; i < 10; i++) {
		arr6[10 + i] = arr6[i];
	}
	print_r(arr6, 20);

	cout << "********Zadanie 7************!" << endl;
	// const int length = 4;
	int matrix[length][length];
	for (short i = 0; i < length; i++) {
		for (short ii = 0; ii < length; ii++) {
			matrix[i][ii] = random(0, 10);
		}
	}

	int sum = 0;
	for(short i = 0; i < length; i++) {
		sum += matrix[i][i];
	}
	// for (short i = 0; i < length; i++) {
	// 	for (short ii = 0; ii < length; ii++) {
	// 		if (i = ii) {
	// 			sum += matrix[i][ii];
	// 		}
	// 	}
	// }3

	print_matrix((int *)matrix, length);
	cout << "suma = " << sum << endl;

	cout << "********Zadanie 8************!" << endl;
	int matrix_add[length][length];
	for (short i = 0; i < length; i++) {
		for (short ii = 0; ii < length; ii++) {
			matrix_add[i][ii] = random(0, 10);
		}
	}

	int matrix_sum[length][length];
	for (short i = 0; i < length; i++) {
		for (short ii = 0; ii < length; ii++) {
			matrix_sum[i][ii] = matrix[i][ii] + matrix_add[i][ii];
		}
	}
	print_matrix((int*)matrix, length);
	print_matrix((int*)matrix_add, length);
	print_matrix((int*)matrix_sum, length);

	cout << "*************************************TABLICE ZNAKOWE*************************************" << endl;
	cout << "********Zadanie 1************!" << endl;
	char zdanie_1[] = { "lot" };
	char zdanie_2[] = { 'l', 'o', 't' };
	
	cout << zdanie_1 << " \tsizeof() = " << sizeof(zdanie_1) << endl;
	cout << zdanie_2 << " \tsizeof() = " << sizeof(zdanie_2) << endl;

	cout << "********Zadanie 2************!" << endl;
	cout << "int liczby[100];" << endl;
	cout << "cin >> liczby;" << endl;
	cout << "Nieprawidłowe dla tablic typu int." << endl;

	cout << "********Zadanie 3************!" << endl;
	char word[] = "wiosna";
	int size = sizeof(word) / sizeof(word[0]) - 1;
	cout << "size(" << word << ") = " << size << endl;

	cout << "********Zadanie 4************!" << endl;
	string str = "";
	cout << "podaj wyraz: ";
	cin >> str;
	string str_copy = str;
	string str_sum = str;
	str_sum.append("_pasted");
	size = str.size();
	cout << "wyraz: " << str << endl;
	cout << "kopia: " << str_copy << endl;
	cout << "dodanie stringa: " << str_sum << endl;
	cout << "size(" << str << ") = " << size << endl;

	cout << "********Zadanie 5************!" << endl;
	string address;
	string house;
	int grade = 0;
	int years = 0;
	cout << "Podaj nazwe ulicy na ktorej mieszkasz: ";
	getline(cin, address);
	cout << "Podaj nr domu: ";
	getline(cin, house);
	cout << "Na ile oceniasz swoje umiejetności programowania w skali [2 - 5]: ";
	cin >> grade;
	cout << "Twoj staz programistyczny: ";
	cin >> years;
	cout << "Adres: " << address << " " << house << endl;
	cout << "Ocena: " << grade - 1 << endl;
	cout << "Staz: " << years << " dni" << endl;

	cout << "********Zadanie 6************!" << endl;
	string txt = "ala ma kota";
	cout << "podaj tekst: ";
	getline(cin, txt);
	string vowels_list = "aeiyou";
	string consonants_list = "qwrtpsdfghjklzxcvbnm";
	int vowels = 0;
	int consonants = 0;
	for (int i = 0; i < txt.size(); i++) {
		if (vowels_list.find(txt[i]) != string::npos) {
			vowels++;
		}
		if (consonants_list.find(txt[i]) != string::npos) {
			consonants++;
		}
	}
	cout << "Wspolgloski: " << vowels << endl;
	cout << "Samogloski: " << consonants << endl;
	return 0;
}
