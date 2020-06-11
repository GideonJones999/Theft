#include <iostream>;
#include <iomanip>;
#include <string>;

using namespace std;

int main() {
	int age = 1245, banknumb = 123456789;
	double cash = 0.0;
	string name, urAnIdiot = "111111111111";

	cout << "How old are you?" << endl;
	cin >> age;

	while (cin.fail())
	{
		cout << "Error: Data not readable. Try again." << endl;
		cin.clear();
		string garbage;
		cin >> garbage;

		cout << "How old are you?" << endl;
		cin >> age;
	}

	cout << "How much money do you have in your bank account?" << endl;
	cin >> cash;

	while (cin.fail())
	{
		cout << "Error: Data not readable. Try again." << endl;
		cin.clear();
		string garbage;
		cin >> garbage;

		cout << "How much money do you have in your bank account?" << endl;
		cin >> cash;
	}

	cout << "What is your bank account number?" << endl;
	cin >> banknumb;

	while (cin.fail())
	{
		cout << "Error: Data not readable. Try again." << endl;
		cin.clear();
		string garbage;
		cin >> garbage;

		cout << "What is your bank account number?" << endl;
		cin >> banknumb;
	}

	cout << "What is your full name?" << endl;
	getline(cin, name);
	cout << endl;
	cout << "What is your social security number?" << endl;
	cin >> urAnIdiot;

	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Money: $" << cash << endl;
	cout << "Bank Account: " << banknumb << endl;
	cout << "SSN: " << urAnIdiot << endl;

	system("Pause");
	return 0;

}