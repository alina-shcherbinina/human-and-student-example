#include "pch.h"
#include <iostream>
#include <vector>
#include <locale.h>
#include "human.h"
#include "student.h"
using namespace std;
int main(int argc, char* argv[])
{
	vector<int> scores;
	setlocale(LC_ALL, "rus");

	scores.push_back(5);
	scores.push_back(2);
	scores.push_back(4);
	scores.push_back(3);
	scores.push_back(5);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(2);
	scores.push_back(3);
	scores.push_back(5);
	scores.push_back(5);
	scores.push_back(5);
	scores.push_back(5);

	student *stud = new student("Aлина", "Щербинина", "Дмитриевна", scores);

	cout << stud->get_full_name() << endl;
	cout << "Средний балл: " << stud->get_average_score() << endl;
	
	system("pause");
	return 0;
}