#include <SFML/Graphics.hpp>
#include "wtypes.h"
#include <iostream>
#include <list>
using namespace std;
using namespace sf;

bool checkArray[] = { false,false, false, false, false, false, false, false, false, false, false, false, false };
Texture menuTexture1, menuTexture2, menuBackground;

void menu(RenderWindow& window) 
{
    Sprite menu1(menuTexture1), menu2(menuTexture2), menuBg(menuBackground);
    bool isMenu = 1;
    int menuNum = 0;
    menu1.setPosition(100, 30);
    menu2.setPosition(100, 90);
    menuBg.setPosition(0, 0);
    //ìåíþ
    while (isMenu)
    {
        menuNum = 0;
        menu1.setColor(Color::White);
        menu2.setColor(Color::White);
        menuNum = 0;
        window.clear(Color(129, 181, 221));
        if (IntRect(100, 30, 300, 50).contains(Mouse::getPosition(window))) { menu1.setColor(Color::Green); menuNum = 1; }
        if (IntRect(100, 90, 300, 50).contains(Mouse::getPosition(window))) { menu2.setColor(Color::Red); menuNum = 2; }
        if (Mouse::isButtonPressed(Mouse::Left))
        {
            if (menuNum == 1) isMenu = false;
            if (menuNum == 2) { window.close(); isMenu = false; }
        }

        window.draw(menuBg);
        window.draw(menu2);
        window.draw(menu1);
        window.display();
    }
}

void GetDesktopResolution(int& horizontal, int& vertical)
{
    RECT desktop;
    // Get a handle to the desktop window
    const HWND hDesktop = GetDesktopWindow();
    // Get the size of screen to the variable desktop
    GetWindowRect(hDesktop, &desktop);
    // The top left corner will have coordinates (0,0)
    // and the bottom right corner will have coordinates
    // (horizontal, vertical)
    horizontal = desktop.right;
    vertical = desktop.bottom;
}

bool startGame()
{
    bool isMove = false;
    float dx = 0;
    float dy = 0;
    int hor = 0;
    int vert = 0;
    GetDesktopResolution(hor,vert);
    RenderWindow window(VideoMode(hor, vert), "Nim");
    menu(window);
    if (!window.isOpen()) 
    {
        return false;
    }
    Texture one;
    one.loadFromFile("images\\matches.jpg");
    Sprite gam1(one);
    gam1.setPosition(10, 30);//x  y  


    Texture two;
    two.loadFromFile("images\\matches.jpg");
    Sprite gam2(two);
    gam2.setPosition(10, 300);


    Texture three;
    three.loadFromFile("images\\matches.jpg");
    Sprite gam3(three);
    gam3.setPosition(10, 600);


    Texture four;
    four.loadFromFile("images\\matches.jpg");
    Sprite gam4(four);
    gam4.setPosition(60, 300);

    Texture five;
    five.loadFromFile("images\\matches.jpg");
    Sprite gam5(five);
    gam5.setPosition(110, 300);

    Texture six;
    six.loadFromFile("images\\matches.jpg");
    Sprite gam6(six);
    gam6.setPosition(160, 300);

    Texture seven;
    seven.loadFromFile("images\\matches.jpg");
    Sprite gam7(seven);
    gam7.setPosition(60, 600); //gam3

    Texture eight;
    eight.loadFromFile("images\\matches.jpg");
    Sprite gam8(eight);
    gam8.setPosition(110, 600);

    Texture nine;
    nine.loadFromFile("images\\matches.jpg");
    Sprite gam9(nine);
    gam9.setPosition(160, 600);

    Texture ten;
    ten.loadFromFile("images\\matches.jpg");
    Sprite gam10(ten);
    gam10.setPosition(210, 600);

    Texture eleven;
    eleven.loadFromFile("images\\matches.jpg");
    Sprite gam11(eleven);
    gam11.setPosition(260, 600);

    Texture twelve;
    twelve.loadFromFile("images\\matches.jpg");
    Sprite gam12(twelve);
    gam12.setPosition(310, 600);

    Texture thirteen;
    thirteen.loadFromFile("images\\matches.jpg");
    Sprite gam13(thirteen);
    gam13.setPosition(360, 600);

    Texture Gameover;
    Gameover.loadFromFile("images\\gameover.jpg");
    Sprite gameO(Gameover);
    gameO.setPosition(0, 0);


    while (window.isOpen())
    {
        Vector2i pos = Mouse::getPosition(window);


        Event event;
        while (window.pollEvent(event))
        {
            if (Keyboard::isKeyPressed(Keyboard::Tab)) { return true; }
            if (Keyboard::isKeyPressed(Keyboard::Escape)) { return false; }
            if (event.type == Event::Closed)
                window.close();


        }

        window.clear(Color::White);
        window.draw(gam1);
        window.draw(gam2);
        window.draw(gam3);
        window.draw(gam4);
        window.draw(gam5);
        window.draw(gam6);
        window.draw(gam7);
        window.draw(gam8);
        window.draw(gam9);
        window.draw(gam10);
        window.draw(gam11);
        window.draw(gam12);
        window.draw(gam13);
        
        bool check = true;
        for(int i = 0; i < sizeof(checkArray); i++)
		{
			if(!checkArray[i])
			{
				check = !check;
				break;
			}
		}
		
        
        if (check)
        {
            window.draw(gameO);
        }
        // window.draw(gameO);


        if (gam1.getGlobalBounds().contains(Vector2f(pos.x, pos.y)) && Mouse::isButtonPressed(Mouse::Left) && !checkArray[0]) {

            gam1.setColor(Color(255, 255, 255, 0));
            checkArray[0] = true;

        }
        if (gam2.getGlobalBounds().contains(Vector2f(pos.x, pos.y)) && Mouse::isButtonPressed(Mouse::Left) && !checkArray[1]) {
            gam2.setColor(Color(255, 255, 255, 0));
            gam4.setColor(Color(255, 255, 255, 0));
            gam5.setColor(Color(255, 255, 255, 0));
            gam6.setColor(Color(255, 255, 255, 0));
            checkArray[1] = true;
            checkArray[3] = true;
            checkArray[4] = true;
            checkArray[5] = true;
        }
        if (gam3.getGlobalBounds().contains(Vector2f(pos.x, pos.y)) && Mouse::isButtonPressed(Mouse::Left) && !checkArray[2]) {

            gam3.setColor(Color(255, 255, 255, 0));
            gam7.setColor(Color(255, 255, 255, 0));
            gam8.setColor(Color(255, 255, 255, 0));
            gam9.setColor(Color(255, 255, 255, 0));
            gam10.setColor(Color(255, 255, 255, 0));
            gam11.setColor(Color(255, 255, 255, 0));
            gam12.setColor(Color(255, 255, 255, 0));
            gam13.setColor(Color(255, 255, 255, 0));
            checkArray[2] = true;
            checkArray[6] = true;
            checkArray[7] = true;
            checkArray[8] = true;
            checkArray[9] = true;
            checkArray[10] = true;
            checkArray[11] = true;
            checkArray[12] = true;
        }
        if (gam4.getGlobalBounds().contains(Vector2f(pos.x, pos.y)) && Mouse::isButtonPressed(Mouse::Left) && !checkArray[3]) {

            gam4.setColor(Color(255, 255, 255, 0));
            gam5.setColor(Color(255, 255, 255, 0));
            gam6.setColor(Color(255, 255, 255, 0));
            checkArray[3] = true;
            checkArray[4] = true;
            checkArray[5] = true;

        }
        if (gam5.getGlobalBounds().contains(Vector2f(pos.x, pos.y)) && Mouse::isButtonPressed(Mouse::Left) && !checkArray[4]) {

            gam5.setColor(Color(255, 255, 255, 0));
            gam6.setColor(Color(255, 255, 255, 0));
            checkArray[4] = true;
            checkArray[5] = true;

        }
        if (gam6.getGlobalBounds().contains(Vector2f(pos.x, pos.y)) && Mouse::isButtonPressed(Mouse::Left) && !checkArray[5]) {

            gam6.setColor(Color(255, 255, 255, 0));
            checkArray[5] = true;

        }
        if (gam7.getGlobalBounds().contains(Vector2f(pos.x, pos.y)) && Mouse::isButtonPressed(Mouse::Left) && !checkArray[6]) {

            gam7.setColor(Color(255, 255, 255, 0));
            gam8.setColor(Color(255, 255, 255, 0));
            gam9.setColor(Color(255, 255, 255, 0));
            gam10.setColor(Color(255, 255, 255, 0));
            gam11.setColor(Color(255, 255, 255, 0));
            gam12.setColor(Color(255, 255, 255, 0));
            gam13.setColor(Color(255, 255, 255, 0));
            checkArray[6] = true;
            checkArray[7] = true;
            checkArray[8] = true;
            checkArray[9] = true;
            checkArray[10] = true;
            checkArray[11] = true;
            checkArray[12] = true;

        }
        if (gam8.getGlobalBounds().contains(Vector2f(pos.x, pos.y)) && Mouse::isButtonPressed(Mouse::Left) && !checkArray[7]) {

            gam8.setColor(Color(255, 255, 255, 0));
            gam9.setColor(Color(255, 255, 255, 0));
            gam10.setColor(Color(255, 255, 255, 0));
            gam11.setColor(Color(255, 255, 255, 0));
            gam12.setColor(Color(255, 255, 255, 0));
            gam13.setColor(Color(255, 255, 255, 0));
            checkArray[7] = true;
            checkArray[8] = true;
            checkArray[9] = true;
            checkArray[10] = true;
            checkArray[11] = true;
            checkArray[12] = true;

        }
        if (gam9.getGlobalBounds().contains(Vector2f(pos.x, pos.y)) && Mouse::isButtonPressed(Mouse::Left) && !checkArray[8]) {

            gam9.setColor(Color(255, 255, 255, 0));
            gam10.setColor(Color(255, 255, 255, 0));
            gam11.setColor(Color(255, 255, 255, 0));
            gam12.setColor(Color(255, 255, 255, 0));
            gam13.setColor(Color(255, 255, 255, 0));
            checkArray[8] = true;
            checkArray[9] = true;
            checkArray[10] = true;
            checkArray[11] = true;
            checkArray[12] = true;
        }
        if (gam10.getGlobalBounds().contains(Vector2f(pos.x, pos.y)) && Mouse::isButtonPressed(Mouse::Left) && !checkArray[9]) {

            gam10.setColor(Color(255, 255, 255, 0));
            gam11.setColor(Color(255, 255, 255, 0));
            gam12.setColor(Color(255, 255, 255, 0));
            gam13.setColor(Color(255, 255, 255, 0));
            checkArray[9] = true;
            checkArray[10] = true;
            checkArray[11] = true;
            checkArray[12] = true;

        }
        if (gam11.getGlobalBounds().contains(Vector2f(pos.x, pos.y)) && Mouse::isButtonPressed(Mouse::Left) && !checkArray[10]) {

            gam11.setColor(Color(255, 255, 255, 0));
            gam12.setColor(Color(255, 255, 255, 0));
            gam13.setColor(Color(255, 255, 255, 0));
            checkArray[10] = true;
            checkArray[11] = true;
            checkArray[12] = true;

        }
        if (gam12.getGlobalBounds().contains(Vector2f(pos.x, pos.y)) && Mouse::isButtonPressed(Mouse::Left) && !checkArray[11]) {

            gam12.setColor(Color(255, 255, 255, 0));
            gam13.setColor(Color(255, 255, 255, 0));
            checkArray[11] = true;
            checkArray[12] = true;

        }
        if (gam13.getGlobalBounds().contains(Vector2f(pos.x, pos.y)) && Mouse::isButtonPressed(Mouse::Left) && !checkArray[12]) {

            gam13.setColor(Color(255, 255, 255, 0));
            checkArray[12] = true;

        }

        window.display();
    }
}
void gameRunning() {
    if (startGame()) { gameRunning(); }
}



int main()
{
    menuTexture1.loadFromFile("images\\play.jpg");
    menuTexture2.loadFromFile("images\\texturee.jpg");
    menuBackground.loadFromFile("images\\whiteback.jpg");
    gameRunning();


    return 0;
}
