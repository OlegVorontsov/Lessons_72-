#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
	string name;
	int age;
	int weight;

	bool Check()
	{
		return true;
	}

public:
	void Setname(string valuename)
	{
		name = valuename;
	}
	void Setage(int valueage)
	{
		age = valueage;
	}
	void Setweight(int valueweight)
	{
		weight = valueweight;
	}
	int Getage()
	{
		return age++;
	}
	void Print()
	{
		if (Check())
		{
			cout << "Имя: " << name << "\nВозраст: " << age << "\nВес: " << weight << endl;
		}
		else
		{
			cout << "В доступе к данным отказано!" << endl;
		}
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	int a = 0;
	cout << a << endl;
	Human FirstMan;
	FirstMan.Setname("Иван");
	FirstMan.Setage(40);
	FirstMan.Setweight(80);
	FirstMan.Getage();
	FirstMan.Print();

	return 0;
}