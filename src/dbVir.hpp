void scan(std::string FileName)
{

	using std::ifstream;
	using std::stringstream;
	using json = nlohmann::json;

	ifstream file(FileName);
	std::ostringstream check;
	ifstream load("~/.TermGuard/database.json");
	long b = 999999999;
	std::string logs;
	check << file.rdbuf();
	json dbVir;
	load >> dbVir;

	if (file.is_open())
	{

		for(int i; i<dbVir["ScanList"].size(); i++)
		{

			std::string dload = dbVir["ScanList"][i];

			int y=0;

			while(y<dbVir[dload].size())
			{

				if(b>check.str().find(dbVir[dload][y]))
				{

					logs += red+"Detected dbVir."+dload+white+"\n";
					break;

				}

				y++;

			}

		}

		std::cout << logs;

	} else
	{

		std::cout << red << "Файл не может быть открыт!" << white << "\n";
	
	}

}