#include<iostream>
#include <stdlib.h>
#include<time.h>
#include<string>
using namespace std;

struct movies {
	string title; //название фильма
	int year; //гоод выхода фильма
	string genre; //жанр фильма
	int duration; //продолжительность фильма
	int price; //цена за диск фильма
};

//Функция выводить информацию об объекте
void showMovies(movies &a) {
	cout<<"|" << a.title << "|" << a.year << "г|" << a.genre << "|" << a.duration << " мин.|" << a.price << " руб.|";
}
//Функция нахождения объекта с наибольшей ценой
void expensive(movies &b, movies &c, movies &d) {
	if (b.price > c.price&&b.price>d.price)
		 showMovies(b);
	if (c.price > b.price && c.price > d.price)
		 showMovies(c);
	if (d.price > b.price && d.price > c.price)
		showMovies(d);
}
void updateInfo(movies &e) {
	movies* pe = &e;
	cout << "Выберите, какую информацию о фильме\nхотите обновить:\n\n";
	cout << "1.Название;\n2.Год выхода;\n3.Жанр;\n4.Продолжительность;\n5.Цена за диск.\n";
	cout << "Ввод--->";
	int q;
	cin >> q;
	switch (q) {
	case 1:cout << "Введите новое название: "; cin >> e.title;break;
	case 2: cout << "Введите новый год выхода фильма: "; cin >> e.year;break;
	case 3: cout << "Введите новый жанр фильма: "; cin >> e.genre;break;
	case 4: cout << "Введите новую продолжительность фильма: "; cin >>e.duration;break;
	case 5:cout << "Введите новую цену диска: "; cin >> e.price;break;
	default:cout << "!!!!ERROR!!!! *ошибка ввода*!!!!ERROR!!!!"<< endl; break;
	}
	showMovies(e);
}

int main() {
	//setlocale(LC_ALL, "ru");
	srand(time(NULL));
	system("chcp 1251>nul");

	movies f1 = {"Форсаж",2001,"Боевик,триллер",94,745};
	movies f2 = { "Терминатор 2",1991,"Фантастика,боевик,триллер",101,1250};
	movies f3 = { "Рокки",1976,"Драма,спорт",120,13700 };
	
	cout << "Задача 1\n";
	showMovies(f1);
	cout << endl;
	cout << "\nЗадача 2\n";
	expensive(f1, f2, f3);

	cout << "\n\nЗадача 3\n";
	updateInfo(f1);
	




	system("pause>nul");
	return 0;
}