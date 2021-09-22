#include "Header.h"

/*
Когда вы вступите в Благотворительный Орден Программистов (БОП), к вам
могут обращаться на заседаниях БОП по вашему реальному имени, по
должности либо секретному имени БОП. Напишите программу, которая может
выводить списки членов по реальным именам, должностям, секретным именам либо
по предпочтению самого члена. В основу положите следующую структуру:

// Структура имен Благотворительного Ордена Программистов (БОП)
struct bop{
	char fullname[strsize]; // реальное имя
	char title[strsize]; // должность
	char bopname[strsize]; // секретное имя БОП
	int preference; // 0 = полное имя, 1 = титул, 2 = имя БОП
};

В этой программе создайте небольшой массив таких структур и
инициализируйте его соответствующими значениями. Пусть программа запустит цикл,
который даст возможность пользователю выбирать разные альтернативы:

a. display by name		b. display by title
c. display by bopname	d. display by preference
q. quit

Обратите внимание, что "display by preference" (отображать по предпочтениям)
не означает, что нужно отобразить член preference; это значит, что
необходимо отобразить член структуры, который соответствует значению preference.
Например, если preference равно 1, то выбор d должен вызвать отображение
должности данного программиста. Пример запуска этой программы может
выглядеть следующим образом:

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
	//Äîïèëèòü ââîä 1 ñèìâîëà
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
