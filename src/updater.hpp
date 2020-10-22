void update()
{

	system("curl https://raw.githubusercontent.com/DarkGa/TermGuard/master/database/database.json -o ~/.TermGuard/database.json");
	std::cout << green << "DataBase update succesfull" << white << std::endl;

}