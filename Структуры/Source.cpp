#include<iostream>
#include <stdlib.h>
#include<time.h>
#include<string>
using namespace std;

struct movies {
	string title; //�������� ������
	int year; //���� ������ ������
	string genre; //���� ������
	int duration; //����������������� ������
	int price; //���� �� ���� ������
};

//������� �������� ���������� �� �������
void showMovies(movies &a) {
	cout<<"|" << a.title << "|" << a.year << "�|" << a.genre << "|" << a.duration << " ���.|" << a.price << " ���.|";
}
//������� ���������� ������� � ���������� �����
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
	cout << "��������, ����� ���������� � ������\n������ ��������:\n\n";
	cout << "1.��������;\n2.��� ������;\n3.����;\n4.�����������������;\n5.���� �� ����.\n";
	cout << "����--->";
	int q;
	cin >> q;
	switch (q) {
	case 1:cout << "������� ����� ��������: "; cin >> e.title;break;
	case 2: cout << "������� ����� ��� ������ ������: "; cin >> e.year;break;
	case 3: cout << "������� ����� ���� ������: "; cin >> e.genre;break;
	case 4: cout << "������� ����� ����������������� ������: "; cin >>e.duration;break;
	case 5:cout << "������� ����� ���� �����: "; cin >> e.price;break;
	default:cout << "!!!!ERROR!!!! *������ �����*!!!!ERROR!!!!"<< endl; break;
	}
	showMovies(e);
}

int main() {
	//setlocale(LC_ALL, "ru");
	srand(time(NULL));
	system("chcp 1251>nul");

	movies f1 = {"������",2001,"������,�������",94,745};
	movies f2 = { "���������� 2",1991,"����������,������,�������",101,1250};
	movies f3 = { "�����",1976,"�����,�����",120,13700 };
	
	cout << "������ 1\n";
	showMovies(f1);
	cout << endl;
	cout << "\n������ 2\n";
	expensive(f1, f2, f3);

	cout << "\n\n������ 3\n";
	updateInfo(f1);
	




	system("pause>nul");
	return 0;
}