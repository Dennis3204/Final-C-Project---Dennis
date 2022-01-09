// HI Ms. Garnier. THERE ARE CITATIONS AT THE BOTTOM OF THE CODE WITH THE CORRESPONDING NUMBERS AT THE LINE IT WAS USED
#include <iostream>
#include "Platform/Platform.hpp"

int main() {
	util::Platform platform;

#if defined(_DEBUG)
	std::cout << "Hello World!" << std::endl;
#endif


	/*this creates the window passing certain perameters into it
		1) videomode sets the length and width of the window
		2) the second parameter is the title of the program in the header of the window
		3) the "Style" are different set templates of a window (default would be one with resizing, minimizing, and a
		close button), where titlebar is just the title bar.
		4) because we only put a title bar (I chose title bar so that the player doesn't mess up the sizing of the window)
		we have to also add a close button using "sf::Style::Close"

		We can use | to pass both titlebar and close into the function
	    ↓	↓	↓	↓	↓	↓	↓	↓	↓	↓	↓	↓	↓	↓	↓   ↓     */

    sf::RenderWindow window(sf::VideoMode(1920,1080),"Dots and Boxes!", sf::Style::Default); // Init window (2)


	sf::Event event; //sfml constantly looks for events that occur with the computer and this event data type captures that



	int vertical[5][4] = //all possible vertical lines (check files/photos for visual)
	  {

	  {0,0,0,0},
	  {0,0,0,0},
	  {0,0,0,0},
	  {0,0,0,0},
	  {0,0,0,0}

	  };

	  int horizontal[4][5] = //all possible horizontal lines (check files/photos for visual)
	  {

	  {0,0,0,0,0},
	  {0,0,0,0,0},
	  {0,0,0,0,0},
	  {0,0,0,0,0}

	  };

	std::cout << vertical << horizontal; //printing this so the code doesn't yell at me for not using it yet

 	sf::RectangleShape line; //test creating a line
	line.setSize(sf::Vector2f(200,3));
	line.setPosition(sf::Vector2f(400,300));

	sf::CircleShape dot;
	dot.setFillColor(sf::Color::White);//fills the dot with the color white (8)
	dot.setRadius(15.f);

	//create vectors to hold all of the dots
	std::vector<sf::CircleShape> firstRow; // (8)
	std::vector<sf::CircleShape> secondRow;
	std::vector<sf::CircleShape> thirdRow;
	std::vector<sf::CircleShape> fourthRow;
	std::vector<sf::CircleShape> fifthRow;
	dot.setPosition(sf::Vector2f(500,500));


	for (int j = 0; j < 5; j++) {
	  //add the dots to the vectors
	  firstRow.push_back(sf::CircleShape(dot));
	  secondRow.push_back(sf::CircleShape(dot));
	  thirdRow.push_back(sf::CircleShape(dot));
	  fourthRow.push_back(sf::CircleShape(dot));
	  thirdRow.push_back(sf::CircleShape(dot));
	}


	//game loop
	while (window.isOpen()){

	  //window.isOpen checks if the created winodw is open or not
	  while (window.pollEvent(event)) {
		//window.pollevent is to check if the code registers an event using the event data type i created "ev"

		switch (event.type)
		{
		  //use this to check the event type (2) (lines 31-50 use this)

		  case sf::Event::Closed: //you'd think that the x button created
		  	window.close(); //this closes the window
			break;

			// we don't process other types of events
          default:
            break;
		}

	}

	//this renders
	window.clear();

	for (int i = 0; i < 5; i++) {

		//this renders renders each of the following dots in the vector
		window.draw(firstRow[i]);
		window.draw(secondRow[i]);
		window.draw(thirdRow[i]);
		window.draw(fourthRow[i]);
		window.draw(fifthRow[i]);

	}

	window.draw(line);
	//Render UI
	window.display();

   }
	return 0;
}
/*

1) https://www.geeksforgeeks.org/multidimensional-arrays-c-cpp/

2)

3) https://www.sfml-dev.org/tutorials/2.5/window-events.php

4) https://www.sfml-dev.org/tutorials/2.5/graphics-view.php and https://www.youtube.com/watch?v=h8LtwbS-1p0&ab_channel=SurajSharma

5) ^ (same one as above)

6)

7)

8) https://www.youtube.com/watch?v=DZOCzW9e6Qs&ab_channel=SurajSharma

*/