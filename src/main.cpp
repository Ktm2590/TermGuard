#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>
#include <string>
#include <ctime>
#include <regex>
#include <unistd.h>
#include "colors.hpp"
#include "config.hpp"
#include "json.hpp"
#include "xors.hpp"
#include "dbVir.hpp"
#include "updater.hpp"

int main(int argc, char *argv[])
{

	using std::string;
	using std::cout;
	using std::endl;

	srand(time(0));

	string greating[5] = {
		"Всегда проверяйте скачаные файлы!", "Наш телеграм канал t.me/TermGuard",
		"Советуем установить антивирусный шелл", "Мы стараемся для вас ^_^", "Есть вопросы или идеи? Пишите в телеграм t.me/mozahist228"
	};

	cout << blue << banner << white;

	cout << yellow << greating[rand()%5] << white << endl << endl;

	for(int i; i<argc; i++)
	{
		
		if(strcmp(argv[i], "-i")==0)
			cout << info;

		if(strcmp(argv[i], "-f")==0)
			scan(argv[i+1]);

		if(strcmp(argv[i], "-h")==0)
			cout << help;

		if(strcmp(argv[i], "-u")==0)
			update();

	}

}