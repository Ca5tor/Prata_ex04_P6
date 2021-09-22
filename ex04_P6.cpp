#include "Header.h"

/*
����� �� �������� � ����������������� ����� ������������� (���), � ���
����� ���������� �� ���������� ��� �� ������ ��������� �����, ��
��������� ���� ���������� ����� ���. �������� ���������, ������� �����
�������� ������ ������ �� �������� ������, ����������, ��������� ������ ����
�� ������������ ������ �����. � ������ �������� ��������� ���������:

// ��������� ���� ������������������ ������ ������������� (���)
struct bop{
	char fullname[strsize]; // �������� ���
	char title[strsize]; // ���������
	char bopname[strsize]; // ��������� ��� ���
	int preference; // 0 = ������ ���, 1 = �����, 2 = ��� ���
};

� ���� ��������� �������� ��������� ������ ����� �������� �
��������������� ��� ���������������� ����������. ����� ��������� �������� ����,
������� ���� ����������� ������������ �������� ������ ������������:

a. display by name		b. display by title
c. display by bopname	d. display by preference
q. quit

�������� ��������, ��� "display by preference" (���������� �� �������������)
�� ��������, ��� ����� ���������� ���� preference; ��� ������, ���
���������� ���������� ���� ���������, ������� ������������� �������� preference.
��������, ���� preference ����� 1, �� ����� d ������ ������� �����������
��������� ������� ������������. ������ ������� ���� ��������� �����
��������� ��������� �������:

Benevolent Order of Programmers Report
a. display by name		b. display by title
c. display by bopname	d. display by preference
q. quit
Enter your choice: a
Wimp Macho
Raki Rhodes
Celia Laiter
Hoppy Hipman
Pat Hand
Next choice: d
Wimp Macho
Junior Programmer
MIPS
Analyst Trainee
LOOPY
Next choice: q
Bye!
*/

void Ex4(void) {
	struct bop			people_bop_struct[size_struct];
	char				choice = ' ';
	unsigned int		i;

	people_bop_struct[0] = {"Wimp Macho",	"Middle Progammer",	 "Lucky ",	 0};
	people_bop_struct[1] = {"Raki Rhodes",	"Junior Programmer", "Milo ",	 1};
	people_bop_struct[2] = {"Celia Laiter",	"Senior Programmer", "MIPS",	 2};
	people_bop_struct[3] = {"Hoppy Hipman",	"Analyst Trainee",	 "Charlie ", 1};
	people_bop_struct[4] = {"Pat Hand",		"TeamLead",			 "LOOPY",	 2};

	std::cout << "Benevolent Order of Programmers Report"			<< std::endl;
	std::cout << "a. display by name \tb. display by title"			<< std::endl;
	std::cout << "c. display by bopname \td. display by preference" << std::endl;
	std::cout << "q. quit"											<< std::endl;
	std::cout << "Enter your choice: ";
	//�������� ���� 1 �������
	while (std::cin >> choice && choice != 'q') {
		i = 0;
		if (choice == 'a')
			while (i < size_struct)
				std::cout << people_bop_struct[i++].fullname << std::endl;
		if (choice == 'b')
			while (i < size_struct)
				std::cout << people_bop_struct[i++].title << std::endl;
		if (choice == 'c')
			while (i < size_struct)
				std::cout << people_bop_struct[i++].bopname << std::endl;
		if (choice == 'd') 
			while (i < size_struct) {
				if (people_bop_struct[i].preference == 0) 
					std::cout << people_bop_struct[i++].fullname << std::endl;
				if (people_bop_struct[i].preference == 1)
					std::cout << people_bop_struct[i++].title << std::endl;
				if (people_bop_struct[i].preference == 2)
					std::cout << people_bop_struct[i++].bopname << std::endl;
			}
		std::cout << "Next choice: ";
	}
	std::cout << "Bye!" << std::endl;
}