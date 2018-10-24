#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
enum Forma{avto=1, horse, reis, walk};
class Date
{
private:
int day;
int month;
int year;
public:
Date() { day = 30, month = 10, year = 2016; }
Date(int day1, int month1, int year1)
{
day = day1;
month = month1;
year = year1;
}
Date(int day2)
{
cout << "Vvedite day" << "\n";
cin >> day;
cout << "Vvedite month" << "\n";
cin >> month;
cout << "Vvedite year" << "\n";
cin >> year;
}
Date(const Date &obj)
{
day=obj.day;
month = obj.month;
year = obj.year;
}
~Date() {};
int Getd() { return day; }
int Getm() { return month; }
int Gety() { return year; }
void PD() { cout << "Today" << " " << day << "." << month << "." << year << "\n"; }
Date& Setd(int d) { day = d; return *this; }
};
class Organizator
{
private:
string name;
string surname;
public:
//Organizator();
void input (){cout<<"\n Введите имя ,фамилию организатора  \n";
			  cin>>name>>surname;}
void output (){cout<<"Вы ввели имя :"<<name<<"Фамилию:"<<surname;} 			  


//Organizator(const Organizator&organizator);
//~Organizator() {}
//void setName(string a) { name = a; }
//void setSurname(string a1) { surname = a1; }
//string getName() { return name; }
//string getSurname() { return surname; }
};
class Ekscursia:public Organizator
{int vartist;
string mesto;
Forma b;
public:
void inputs (){cout<<"Введите стоимость,место экскурсии \n";
			   cin>>vartist>>mesto;}
void outputs () {cout<<endl<<vartist<<mesto;}	   

};

class Tur
{
private:
Date pochatok;
int *arr;
int n;
public:
Tur();
~Tur() { delete[]arr; }
};
//Organizator::Organizator() 
/*cout << "Name,surname organizatora \n";
cout << "Vvedite name: ";
cin >> name;
cout << "Vvedite surname: ";
cin >> surname;
}
Ekscursia::Ekscursia() {
a.printOrg();
cout << "Vvedite vartist: ";
cin >> vartist;
cout << "Vvedite mesto: ";
cin >> mesto;
cout << vartist << " " << mesto << endl;
}*/
Tur::Tur() {
cout << "Введите кол-во экскурсий";
cin >> n;
arr = new int[n];
for (int i = 0; i < n; i++) {
cout << "Форма экскурсий: ";
cin >> arr[i];
}
for (int i = 0; i < n; i++) {
Forma a = avto;
int a1 = a;
a1 = arr[i];
switch (a1) {
case(avto) : cout << "Автобусная экскурсиия" << "\n"; break;
case(horse) : cout << "Экскурсия на лошади" << "\n"; break;
case(reis) : cout << "Рейсовая экскурсия" << "\n"; break;
case (walk) : cout << "Пешая экскурсия" << "\n"; break;
}
}
pochatok.PD();
}
int main()
 {setlocale(LC_ALL, "Russian");
 Ekscursia B;
 B.inputs();
B.outputs();
B.input();
B.output();
 Tur A;
 cin.get();
cin.get();
system("pause");
return(0);
}

