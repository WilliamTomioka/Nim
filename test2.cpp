#include <SFML/Graphics.hpp>
#include <iostream>
#include <list>
using namespace std;
using namespace sf;
void menu(RenderWindow & window) {
	Texture menuTexture1, menuTexture2, menuBackground;
	menuTexture1.loadFromFile("C:\\images\\texture.jpg");
	menuTexture2.loadFromFile("C:\\images\\texturee.jpg"); 
    menuBackground.loadFromFile("C:\\images\\whiteback.jpg");
    Sprite menu1(menuTexture1), menu2(menuTexture2), menuBg(menuBackground);
 bool isMenu = 1;
 int menuNum = 0;
    menu1.setPosition(100, 30);
	menu2.setPosition(100, 90);
	menuBg.setPosition(0, 0);
//меню
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
			if (menuNum == 2)  { window.close(); isMenu = false; }
            
		}
 
	window.draw(menuBg);
		window.draw(menu1);
		window.draw(menu2);
		window.display();
	}
}
bool startGame()
{
  bool isMove=false;
  float dx=0; 
  float dy=0;
  bool d;
  d = false; 
 RenderWindow window(VideoMode(1400, 1000), "Nim");
 menu(window);
 	Texture one;
   	one.loadFromFile("C:\\images\\one.jpg");
    Sprite gam1(one);
    gam1.setPosition(10, 30);//x  y  
    
   	 
	Texture two;
    two.loadFromFile("C:\\images\\two.jpg");
    Sprite gam2(two);
    gam2.setPosition(10, 300); 
    
     	
    Texture three;
   	three.loadFromFile("C:\\images\\three.jpg");
    Sprite gam3(three);
    gam3.setPosition(10, 600);
    
    
    Texture four;
   	four.loadFromFile("C:\\images\\four.jpg");
    Sprite gam4(four);
    gam4.setPosition(60, 300); 
    
    Texture five;
   	five.loadFromFile("C:\\images\\five.jpg");
    Sprite gam5(five);
    gam5.setPosition(110, 300);
    
    Texture six;
   	six.loadFromFile("C:\\images\\six.jpg");
    Sprite gam6(six);
    gam6.setPosition(160, 300);
    
    Texture seven;
   	seven.loadFromFile("C:\\images\\seven.jpg");
    Sprite gam7(seven);
    gam7.setPosition(60, 600); //gam3
    
    Texture eight;
   	eight.loadFromFile("C:\\images\\eight.jpg");
    Sprite gam8(eight);
    gam8.setPosition(110, 600);
   
    Texture nine;
   	nine.loadFromFile("C:\\images\\nine.jpg");
    Sprite gam9(nine);
    gam9.setPosition(160, 600);
   
    Texture ten;
   	ten.loadFromFile("C:\\images\\ten.jpg");
    Sprite gam10(ten);
    gam10.setPosition(210, 600);
    
    Texture eleven;
   	eleven.loadFromFile("C:\\images\\eleven.jpg");
    Sprite gam11(eleven);
    gam11.setPosition(260, 600);
	
	Texture twelve;
   	twelve.loadFromFile("C:\\images\\twelve.jpg");
    Sprite gam12(twelve);
    gam12.setPosition(310, 600);
	
	Texture thirteen;
   	thirteen.loadFromFile("C:\\images\\thirteen.jpg");
    Sprite gam13(thirteen);
    gam13.setPosition(360, 600);
    
    Texture Gameover;
   	Gameover.loadFromFile("C:\\images\\gameover.jpg");
    Sprite gameO(Gameover);
    gameO.setPosition(250, 600);
    
	
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
   // window.draw(gameO);
    
    
    if(gam1.getGlobalBounds().contains(Vector2f(pos.x, pos.y)) && Mouse::isButtonPressed(Mouse::Left)){
    	
    	gam1.setColor(Color(255, 255, 255, 0));
    	d=true;
	}
    if(gam2.getGlobalBounds().contains(Vector2f(pos.x, pos.y)) && Mouse::isButtonPressed(Mouse::Left)){
    	gam2.setColor(Color(255, 255, 255, 0));
    	gam4.setColor(Color(255, 255, 255, 0));
    	gam5.setColor(Color(255, 255, 255, 0));
    	gam6.setColor(Color(255, 255, 255, 0));
    	d=true;
	}
	if(gam3.getGlobalBounds().contains(Vector2f(pos.x, pos.y)) && Mouse::isButtonPressed(Mouse::Left)){
    	
    	gam3.setColor(Color(255, 255, 255, 0));
    	gam7.setColor(Color(255, 255, 255, 0));
    	gam8.setColor(Color(255, 255, 255, 0));
    	gam9.setColor(Color(255, 255, 255, 0));
    	gam10.setColor(Color(255, 255, 255, 0));
    	gam11.setColor(Color(255, 255, 255, 0));
    	gam12.setColor(Color(255, 255, 255, 0));
    	gam13.setColor(Color(255, 255, 255, 0));
    	d=true;
	}
	if(gam4.getGlobalBounds().contains(Vector2f(pos.x, pos.y)) && Mouse::isButtonPressed(Mouse::Left)){
    	
    	gam4.setColor(Color(255, 255, 255, 0));
    		gam5.setColor(Color(255, 255, 255, 0));
    	gam6.setColor(Color(255, 255, 255, 0));
    	d=true;
	}
	if(gam5.getGlobalBounds().contains(Vector2f(pos.x, pos.y)) && Mouse::isButtonPressed(Mouse::Left)){
    	
    	gam5.setColor(Color(255, 255, 255, 0));
    	gam6.setColor(Color(255, 255, 255, 0));
    	d=true;
	}
	if(gam6.getGlobalBounds().contains(Vector2f(pos.x, pos.y)) && Mouse::isButtonPressed(Mouse::Left)){
    	
    	gam6.setColor(Color(255, 255, 255, 0));
    	d=true;
	}
	if(gam7.getGlobalBounds().contains(Vector2f(pos.x, pos.y)) && Mouse::isButtonPressed(Mouse::Left)){
    	
    	gam7.setColor(Color(255, 255, 255, 0));
    	gam8.setColor(Color(255, 255, 255, 0));
    	gam9.setColor(Color(255, 255, 255, 0));
    	gam10.setColor(Color(255, 255, 255, 0));
    	gam11.setColor(Color(255, 255, 255, 0));
    	gam12.setColor(Color(255, 255, 255, 0));
    	gam13.setColor(Color(255, 255, 255, 0));
    	d=true;
	}
	if(gam8.getGlobalBounds().contains(Vector2f(pos.x, pos.y)) && Mouse::isButtonPressed(Mouse::Left)){
    	
    	gam8.setColor(Color(255, 255, 255, 0));
    	gam9.setColor(Color(255, 255, 255, 0));
    	gam10.setColor(Color(255, 255, 255, 0));
    	gam11.setColor(Color(255, 255, 255, 0));
    	gam12.setColor(Color(255, 255, 255, 0));
    	gam13.setColor(Color(255, 255, 255, 0));
    	d=true;
	}
	if(gam9.getGlobalBounds().contains(Vector2f(pos.x, pos.y)) && Mouse::isButtonPressed(Mouse::Left)){
    	
    	gam9.setColor(Color(255, 255, 255, 0));
    	gam10.setColor(Color(255, 255, 255, 0));
    	gam11.setColor(Color(255, 255, 255, 0));
    	gam12.setColor(Color(255, 255, 255, 0));
    	gam13.setColor(Color(255, 255, 255, 0));
    	d=true;
	}
	if(gam10.getGlobalBounds().contains(Vector2f(pos.x, pos.y)) && Mouse::isButtonPressed(Mouse::Left)){
    	
    	gam10.setColor(Color(255, 255, 255, 0));
    	gam11.setColor(Color(255, 255, 255, 0));
    	gam12.setColor(Color(255, 255, 255, 0));
    	gam13.setColor(Color(255, 255, 255, 0));
    	d=true;
	}
	if(gam11.getGlobalBounds().contains(Vector2f(pos.x, pos.y)) && Mouse::isButtonPressed(Mouse::Left)){
    	
    	gam11.setColor(Color(255, 255, 255, 0));
    	gam12.setColor(Color(255, 255, 255, 0));
    	gam13.setColor(Color(255, 255, 255, 0));
    	d=true;
	}
	if(gam12.getGlobalBounds().contains(Vector2f(pos.x, pos.y)) && Mouse::isButtonPressed(Mouse::Left)){
    	
    	gam12.setColor(Color(255, 255, 255, 0));
    	gam13.setColor(Color(255, 255, 255, 0));
    	d=true;
	}
	if(gam13.getGlobalBounds().contains(Vector2f(pos.x, pos.y)) && Mouse::isButtonPressed(Mouse::Left)){
    	
    	gam13.setColor(Color(255, 255, 255, 0));
    	d=true;
	}
    window.display();
} 
}
void gameRunning(){
	if (startGame()) { gameRunning(); } 
}

int main()
{

  gameRunning();
  
       
return 0;
}
