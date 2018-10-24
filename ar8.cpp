#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>
#include <iomanip>


using namespace std;

enum riven { bakalavr = 3, specialist, magistr };


class Date
{
private:
	int d, m, y;
public:
	Date()
	{
		cout << " День - ";
		cin >> d;
		cout << " Месяц - ";
		cin >> m;
		cout << " Год - ";
		cin >> y;
	}
	Date(int d1, int m1, int y1)
	{
		cout << " Работает конструктор с параметром: " << endl;
		d = d1;
		m = m1;
		y = y1;
	}

	Date(const Date&dater)
	{
		cout << " Работает конструктор копирования: " << endl;
		d = dater.d;
		m = dater.m;
		y = dater.y;
	}

	~Date() {};
	int Getdate() { return d; }
	int Getm() { return m; }
	int Getyear() { return y; }

	Date& Setd(int d) { d = d; return *this; }
	void PrintDate() { cout << " Дата: " << d << "." << m << "." << y << endl; }
};
class Ludyna
{
private:
	string imya;
	string prizvysche;
	Date datyear;
public:
	void input (){cout<<"\n Введите данные студента \n";
				  cout<<"Введите имя: ";
			  cin>>imya;
			  cout<<"Введите фамилию:";
			  cin >> prizvysche;}
void output (){cout<<"Вы ввели имя :"<<imya<<"Фамилию:"<<prizvysche;} 	

	
	string Getimya() { return imya; }
	string Getprizvysche() { return prizvysche; }
	void info()
	{
		//cout <<" Имя -  " << Getimya() << endl;
		//cout <<" Фамилия -  " <<  Getprizvysche() << endl;
		datyear.PrintDate();
		
	}
	
	void printludyna()
	{
		cout << "\n ФИО: " << Getprizvysche() << " " << Getimya() << endl;
	}
};
class Ispyt
{
private:
	char ispyt[10];
	float ocinka;
	Date ekzam;
	//date дата прохождения испыта
public:
	Ispyt()
	{
		cout << " Введите предмет и оценку:" << endl;
		cout << " Предмет: ";
		cin >> ispyt;
		cout << " Оценка: ";
		cin >> ocinka;
		cout << " Введите дату сдачи экзамена: " << endl;
		
	}

};
class student: public Ludyna{
private:
	float c=0;
	//Ludyna lud;
	riven osv;
	int *B;
	int rozmir;
	int rozmir1=0;
	string pred;
	Ispyt isp;
	Date dat;
public:
	void inputs (){cout << " Введите кол-во экзаменов: ";
		cin >> rozmir;}
	Student()
	{
		
	
		string pred;//predmet
		B = new int[rozmir];
		for (int i = 0; i<rozmir; i++)
		{
			cout << " Введите название и оценку экзамена - " << i + 1 << ": ";
			cin >> pred >> B[i];
			c += B[i];
		}
	}
	float raschet(float k)
	{
		return (k / (rozmir+rozmir1));
	}

	void schet()
	{
		cout << fixed;
		cout << setprecision(1) << " Средняя оценка: " << raschet(c) << endl;
		riven bak = bakalavr;
		float a1 = bak;
		a1 = raschet(c);
		if (a1<3)
		{
			cout << "Не получил диплом" << endl;
		}
		else if (a1>=3 && a1<4)
		{
			cout << "Бакалавр " << endl;
		}
		else if (a1>=4 && a1<=4.5)
		{
			cout << " Специалист " << endl;
		}
		else if (a1>4.5 && a1<=5)
		{
			cout << " Магистр " << endl;
		}
		if (a1>5)
		{
			cout << "Не получил диплом" << endl;
		}
	}
	void dopisp()
	{
		cout << " Введите кол-во доп. экзаменов: ";
		cin >> rozmir1;
		string pred;//predmet
		B = new int[rozmir1];
		for (int i = 0; i<rozmir1; i++)
		{
			cout << " Введите название и оценку доп. экзамена - " << i + 1 << ": ";
			cin >> pred >> B[i];
			c += B[i];
		}
		schet();
	}
	void vuvod()
	{
		system("cls");
		info();
		schet();
		cout << "\n Фамилия - " << Getprizvysche() << ", Средняя оценка - " << raschet(c) << endl;
	}

};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << " Введите сегодняшнюю дату: " << endl;
	//Date O1,O2(1,10,2016);
	//O1.PrintDate();
	//O2.PrintDate();
	//cout << " День О1: " << O1.Getdate();
	//cout <<"\n" " Месяц О2: " << O2.Getm()<< endl;
	//cout <<"\n" " Введите дату рождения: " << endl;
	//Ludyna L1;
	//L1.info();
	//cout <<"\n" " Введите дату экзамена: " << endl;
	//Ispyt P1;
	//P1.ekzam1();
	student S1;
	S1.input();
	S1.output();
	S1.inputs();
	S1.schet();
	S1.dopisp();
	S1.vuvod();

	system("pause");
	cin.get();
	cin.get();
	return (0);
}

