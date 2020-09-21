#include<iostream>
using	namespace std;

class ClasseBase
{
public:
	virtual void Virtual()
	{
		cout << "Estou na clase base" << endl;
	}
};

class Derivada:public ClasseBase
{
public:
	void Virtual()
	{
		cout << "Estou na classe derivada" << endl;
	}
	
};

int main()
{
	ClasseBase *p;
	ClasseBase base;
	Derivada derivada;

	p = &base;
	p->Virtual();

	p = &derivada;
	p->Virtual();

	system("pause");
	return 0;
}