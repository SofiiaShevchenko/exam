// Туристична фірма не встигла через великі морози продати n (n < 15) путівок на гірськолижні бази, термін дії яких вже настав.
// Щоб зменшити втрати, було вирішено з 1 лютого всі такі путівки, яким залишилось dk (dk ≤ 30) днів, 
// продавати за номінальною вартістю – по ck (ck ≤ 100) грн за день лише за ті дні, які залишились з дня продажу (k = 1..n). 
// На яку найбільшу суму можна реалізувати ці путівки, якщо кожного дня продавати по одній путівці?

#include <iostream>
#include <Windows.h>

using namespace std;

void sum() 
{
	int n, dk, ck;
	int max;

	max = ck * (n * dk - ((n * (n + 1)) / 2 - n));  // За допомогою математичного виразу, обчислюємо максимальну суму, 
                                                        //на яку можна реалізувати путівки (для наочності можна використати таблицю в Excel)
}

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n, dk, ck;
	int max;

	cout << "Enter the amount of trip tickets that left (from 1 to 14): ";    // Вводимо кількість путівок, що залишились (менше 15)
	cin >> n;

	if (n >= 15)                     // Якщо кількість путівок більше або дорівнює 15, то програма не виконається (за умовою)
	{
		cout << "Incorrect condition" << endl;
	}

	cout << "Enter the amount of days that left (from 1 to 30): ";   // Вводимо кількість днів, що залишились (менше 30)
	cin >> dk;

	if (dk > 30)         // Якщо кількість днів більше 30, то програма не виконається (за умовою)
	{
		cout << "Incorrect condition" << endl;
	}

	if (dk < n)       // Повинна виконуватись умова, що кількість днів, що залишились, менша за кількість путівок
	{
		cout << "Incorrect condition" << "\n";
		cout << "Amount of days that left cannot be less than amount of trip tickets" << endl;
	}

	cout << "Enter the price of the one day of the trip ticket (from 1 to 100): ";   // Вводимо ціну за одинь день путівки (менше 100)
	cin >> ck;

	if (ck > 100)         // Якщо ціна більше 100, то програма не виконається (за умовою)
	{
		cout << "Incorrect condition" << endl;
	}

	void sum();

	cout << "The maximum price of sold trip tickets: " << max << " грн" << endl;     //Виводимо максимальну суму, на яку можна реалізувати путівки

	return 0;

}
