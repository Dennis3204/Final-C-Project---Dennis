#include <iostream>

class Logic{

//public and private attributes

private:

public:

  int mouseX; //variable to store mouse x
  int mouseY; //variable to store mouse y

//methods

void lineCheck(float x1, float y1, float x2, float y2); //this checks to see if the two points clicked are valid or not

void createLine(); //if the two points clicked are valid then this makes the line

void trackMouse(int &x, int &y, sf::Event &ev); //this checks any mouse move events and spits out the x and y of the mouse

};