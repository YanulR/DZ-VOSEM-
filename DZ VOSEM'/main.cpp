#include "Student.h"
int main()
{
	Student me("Yanul", "Aleksei", "31.03.2003", "KVBO-01-21");
	Student other;
	cout << me << "\n";
	cin >> other;
	me = other;
	cout << "\n" << me;
}