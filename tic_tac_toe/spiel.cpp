#include <iostream>
#include <regex>

char feld[9] = {'1','2','3','4','5','6','7','8','9'};

bool wincheck();

int main() {
	std::cout << " tic tac toe \n";
	std::string stringinput = "";
	int input;
	char player = 'O';

	while(true) {
		std::cout << feld[0] <<"|" << feld[1] << "|" << feld[2] << "\n";
		std::cout << feld[3] << "|" << feld[4] << "|" << feld[5] << "\n";
		std::cout << feld[6] << "|" << feld[7] <<"|" <<feld[8] << "\n";
		std::cout << "Gib die zahl des Feldes ein welches du markieren moechtest: ";

		std::cin >> stringinput;
		stringinput = std::regex_replace(stringinput, std::regex(R"([^\d])"), "");
		input = std::stoi(stringinput);

		if (player == 'O') {
			player = 'X';
		}else {
			player = 'O';
		}

		std:switch (input) {
		case 1:
			feld[0] = player;
			break;
		case 2:
			feld[1] = player;
			break;
		case 3:
			feld[2] = player;
			break;
		case 4:
			feld[3] = player;
			break;
		case 5:
			feld[4] = player;
			break;
		case 6:
			feld[5] = player;
			break;
		case 7:
			feld[6] = player;
			break;
		case 8:
			feld[7] = player;
			break;
		case 9:
			feld[8] = player;
			break;
		}
		system("cls");
		if(wincheck() == true) {
			std::cout << player << " HAT GEWONNEN!";
			system("pause > nul");
			system("cls");
		}
	}
}
															
bool wincheck() {											
	if (feld[0] == 'O' && feld[1] == 'O' && feld[2] == 'O') return true;
	if (feld[3] == 'O' && feld[4] == 'O' && feld[5] == 'O') return true;				
	if (feld[6] == 'O' && feld[7] == 'O' && feld[8] == 'O') return true;				
	if (feld[0] == 'O' && feld[3] == 'O' && feld[6] == 'O') return true;				
	if (feld[1] == 'O' && feld[4] == 'O' && feld[7] == 'O') return true;				
	if (feld[2] == 'O' && feld[5] == 'O' && feld[8] == 'O') return true;				
	if (feld[0] == 'O' && feld[4] == 'O' && feld[8] == 'O') return true;				
	if (feld[2] == 'O' && feld[4] == 'O' && feld[6] == 'O') return true;				
	if (feld[0] == 'X' && feld[1] == 'X' && feld[2] == 'X') return true;				
	if (feld[3] == 'X' && feld[4] == 'X' && feld[5] == 'X') return true;				
	if (feld[6] == 'X' && feld[7] == 'X' && feld[8] == 'X') return true;				
	if (feld[0] == 'X' && feld[3] == 'X' && feld[6] == 'X') return true;				
	if (feld[1] == 'X' && feld[4] == 'X' && feld[7] == 'X') return true;				
	if (feld[2] == 'X' && feld[5] == 'X' && feld[8] == 'X') return true;				
	if (feld[0] == 'X' && feld[4] == 'X' && feld[8] == 'X') return true;				
	if (feld[2] == 'X' && feld[4] == 'X' && feld[6] == 'X') return true;				
	return false;
}