#include "Platform/Platform.hpp"
#include "SFML/Graphics.hpp"
#include "SFML/system.hpp"
#include "SFML/Window.hpp"
#include "SFML/Audio.hpp"
#include "SFML/Network.hpp"

//this class acts as the "Game Engine"

class Game {

	public:


	/*
	the arrays below are a representation of all the possible lines
	that someone can make on a 5x5 dots and boxes board. If the number is 1
	then player one drew the line there, if its 2 then player two, and if its 0
	then no one has drawn it yet.

	(1)
	*/

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

	void createBox(); //creates a filled box once four lines are connected together to make a box
	void boxCheck(); //checks to see if there is a box that has been made with lines
	void update(); //updates the display
	void render(); //creates all of the dots and UI stuff
};

