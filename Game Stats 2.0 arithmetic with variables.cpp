//Game Stats 2.0 - Выполнение арифметических операций с переменными

#include <iostream>

using namespace std;

int main()
{
	// объявление переменной "score"
	unsigned int score = 5000;
	cout << "score:"<< score<<endl;

	score = score + 100;
	score += 100;
	cout << "score:" << score << endl;

	// оператор инкремента - префикс "++lives"
	int lives = 3;
	++lives;
	cout << "lives:" << lives << endl;

	// оператор инкремента - постфикс "lives++"
	lives = 3;
	lives++;
	cout << "lives:" << lives << endl;

	lives = 3;
	int bonus = ++lives*10;
	// (1+3)*10; lives = 4, bonus = 40
	cout << "lives,bonus:" << lives <<"," <<bonus<< endl;

	lives = 3;
	bonus = lives ++ * 10;
	// 1+3*10; lives = 4, bonus = 30
	cout << "lives,bonus:" << lives << "," << bonus << endl;

	score = 4294967295;
	cout << "\nscore:" << score << endl;
	++score;
	// = 0; значение сбрасывается на минимум, типа обнуление счетчика
	cout << "score:" << score << endl;

	return 0;
}