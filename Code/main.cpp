#include "game.h"

int main()
{
    //�������� ������
    if (!font.loadFromFile("Fonts/game_font.ttf"))
    {
        std::cerr << "font error!" << std::endl;
        return -1;
    }

	game();
}