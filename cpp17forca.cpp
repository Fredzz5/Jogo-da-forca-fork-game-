//faz a porra do jogo da forca melhor nesse caralho 
#include <iostream>
#include <random>
#include <string>
#include <fstream>
#include <unordered_map>
//ao mudar (adicionar ou remover) nomes em cada tema, mudar o intervalo de cada um

std::unordered_map<bool, std::string> final_ascii{
	{true, "⡯⡯⡯⣯⢯⢿⢽⠝⡰⡭⣫⡓⠝⠈⠑⠉⠈⠑⠙⠝⣸⢿⡽⣯⢿⣽⣻⡽⡨⡊ \n⡯⡯⣟⣽⢽⢯⢋⢔⢽⠉⢁⢠⡰⣬⡪⠬⢄⡡⡠⠄⠈⢿⡽⡯⣟⣾⣳⡯⢏⠯\n⡯⡿⡽⣞⡯⡏⡢⡡⠁⠰⠘⠘⢼⡰⢔⠖⣆⠬⠐⠁⢂⠈⢻⣽⣻⣞⡷⡏⡰⢈\n⡯⣟⡽⠓⠋⠁⣠⠄⠠⠑⠐⠑⠄⢀⠈⠉⡀⠈⠐⠐⠐⠄⠄⣁⠑⠑⠻⣳⢵⣳\n⣈⣀⢤⢤⢶⡻⠃⠄⡢⠓⠁⠐⢀⠑⠍⢉⠃⠁⠐⠄⠂⠆⠄⠙⠽⡦⣄⠈⠙⠺\n⠓⡩⠩⠩⠃⠄⠄⠄⢅⢰⠉⢰⡀⡰⣴⡢⠄⠢⣗⠁⡆⠄⠄⠄⠄⠈⠝⠩⠢⠄\n⠄⠄⠁⠌⠂⡲⡄⠄⡪⣂⢉⢈⡰⣺⣺⢽⣀⠁⡀⡀⠄⠂⠄⡯⡛⠌⠄⠡⠨⠈\n⣠⢤⣀⣀⡀⠄⠄⠄⢈⠪⡲⣵⠉⠈⠈⠍⠈⠁⣗⢆⠊⠄⢀⣀⣀⢤⣲⡒⡠⠄\n⡯⣯⢯⣟⡾⡽⡶⣄⠄⢂⠩⡺⡥⡦⣕⣤⡢⠈⢎⠐⠄⡰⣯⢷⣻⢽⣝⡇⣴⡕\n⡯⣗⣿⣺⢽⡪⡯⣻⡄⠐⠨⡘⠌⠉⠈⠈⠨⢑⢀⠊⢠⢿⢽⣝⠮⠋⠐⠘⠑⠁\n⠯⢗⣗⡯⣷⢝⠮⠳⢉⠄⠑⢔⢄⠄⠄⠄⠄⢀⢌⠂⣈⠋⠓⢁⣁⣤⣶⣗⣷⢿\n⣤⣄⣀⣀⣀⣀⣤⣴⢽⣏⠄⠘⢜⡘⠜⡌⢇⠕⠄⢠⡯⣟⣽⣻⣽⣟⣾⣽⡾⣿\n⣿⢽⣯⢿⣻⣽⢷⣻⣽⣞⣦⣄⣀⣀⠁⡈⣀⡠⡴⡯⡯⣗⣯⡿⣾⣽⢾⣷⣻⣟\n⡯⣿⢾⣟⣯⣿⣻⣯⡷⣟⣞⢾⣝⡾⡽⣮⡳⡯⣫⢯⢯⣻⣞⣿⣳⣟⡿⣞⣷⣻\n"},
	{ false,"⢠⣤⣤⠄⣠⣤⣄⠄⢠⣤⣤⠄⢀⡭⠭⠉⠁⣀⠤⣄⠄⣀⡤⣄⡀\n⢸⡷⠶⠄⣿⠤⣞⠄⢸⡷⠶⠂⠘⠶⢤⡄⢼⠄⠄⠄⢸⡇⠄⠄⡷\n⠘⠃⠄⠄⠛⠄⠈⠃⠘⠓⠒⠂⠐⠒⠚⠁⠈⠓⠒⠒⠄⠑⠒⠚⠁ \n" }
};

void qual_forca(int x);

int main() {
	std::ifstream file("temas.txt", std::ios::app);
	if (!file) {
		std::cerr << "arquivo inexistente. por favor, mova o arquivo ""temas.txt"" para o diretorio atual.\n";
		return 0;
	}
	//nao esquecer random device e int distribuition.
	std::random_device rd;
	std::mt19937 rapaz(rd());
	std::uniform_int_distribution<std::size_t> range(1, 80); //volta aqui pra definir o range

     
    std::size_t contador_temas{0}; //acima da linha 20 e abaixo da 40, tema tal assim vai.
	std::size_t escolhido{range(rapaz)};
	std::string which;
	for (; escolhido > 0; --escolhido) {
		std::getline(file, which);
        contador_temas++;
	}
    std::cout << "TEMA: ";
    if (contador_temas <= 20)
        std::cout << "RACAS DE MACACO\n\n";
    else if (contador_temas > 20 && contador_temas <= 30)
        std::cout << "ANIMES\n\n";
    else if (contador_temas > 30 && contador_temas <= 60)
        std::cout << "FILMES\n\n";
    else if (contador_temas > 60 && contador_temas <= 80)
        std::cout << "JOGOS\n\n";
	std::string game;
    unsigned int quantos_isspaces{0};
	for (std::size_t i{}; i < which.size(); ++i) {
        if (std::isspace(which.at(i))) {
            game.push_back('-');
            quantos_isspaces++;
        }
        else
		game.push_back('_');
	}
	char letra;
	unsigned int tentativas{6};
	std::string ja_usadas;
	short int acertos{ 0 };
	while (acertos < which.size()-quantos_isspaces) {
		std::cout << "insira uma letra: ";
		std::cin >> letra;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		while (ja_usadas.find(letra) != std::string::npos) {
			std::cout << "letra ja inserida. insira uma nova: ";
			std::cin >> letra;
		}
        letra = std::tolower(letra);
		if (which.find(letra) == std::string::npos) {
			std::cout << "ERROU! " << --tentativas << " restantes.\n\n";
            ja_usadas.push_back(letra);
		}
		else {
			std::cout << "ACERTOU! " << tentativas << " restantes.\n\n";
			ja_usadas.push_back(letra);
			for (std::size_t i{}; i < which.size(); ++i) {
				if (which.at(i) == letra) {
					game.replace(i, 1, std::string{letra});
					acertos++;
				}
			}
		}
        qual_forca(tentativas);
		std::cout << game << "\n\n";
		if (!tentativas)
			break;
	}

	std::cout << "voce " << (acertos == which.size()-quantos_isspaces ? "ganhou" : "perdeu") << ".\n" << final_ascii[static_cast<bool>(tentativas)];

	return 0;

}

void qual_forca(int x) {
    if (x == 6) {
        std::cout << "______________________        \n"
            << "|                    |        \n"
            << "|                    |        \n"
            << "|                             \n"
            << "|                             \n"
            << "|                             \n"
            << "|                             \n"
            << "|                             \n"
            << "|                             \n"
            << "|                             \n";
    }
    if (x == 5)
    {
        std::cout << "______________________        \n"
            << "|                    |        \n"
            << "|                    |        \n"
            << "|                    0        \n"
            << "|                             \n"
            << "|                             \n"
            << "|                             \n"
            << "|                             \n"
            << "|                             \n"
            << "|                             \n";
    }
    if (x == 4)
    {
        std::cout << "______________________        \n"
            << "|                    |        \n"
            << "|                    |        \n"
            << "|                    0        \n"
            << "|                    |        \n"
            << "|                             \n"
            << "|                             \n"
            << "|                             \n"
            << "|                             \n"
            << "|                             \n";
    }
    if (x == 3)
    {
        std::cout << "______________________        \n"
            << "|                    |        \n"
            << "|                    |        \n"
            << "|                    0        \n"
            << "|                    |        \n"
            << "|                     \\      \n"
            << "|                             \n"
            << "|                             \n"
            << "|                             \n"
            << "|                             \n";
    }
    if (x == 2)
    {
        std::cout << "______________________        \n"
            << "|                    |        \n"
            << "|                    |        \n"
            << "|                    0        \n"
            << "|                    |        \n"
            << "|                   / \\      \n"
            << "|                             \n"
            << "|                             \n"
            << "|                             \n"
            << "|                             \n";
    }
    if (x == 1)
    {
        std::cout << "______________________        \n"
            << "|                    |        \n"
            << "|                    |        \n"
            << "|      coe mlk <--   0        \n"
            << "|      me mata       |--      \n"
            << "|       não         / \\      \n"
            << "|                             \n"
            << "|                             \n"
            << "|                             \n"
            << "|                             \n";
    }
    if (x == 0)
    {
        std::cout << "______________________        \n"
            << "|                    |        \n"
            << "|                    |        \n"
            << "|                    0        \n"
            << "|                  --|--      \n"
            << "|                   / \\      \n"
            << "|                             \n"
            << "|                             \n"
            << "|                             \n"
            << "|                             \n";
    }
}