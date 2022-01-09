#include "logic.hpp"


void Logic::lineCheck(float x1, float y1, float x2, float y2){
  //this function checks the two clicks that the player makes and sees if they are valid or not

  if (x2 - x1 > 50 && y2 - y1 > 50) {

	std::cout << "Invalid input! Please try again!"; //aka if they try drawing a diagonal line
  }
  else if (x2 - x1 < 50 && y2 - y1 < 50) {

	std::cout << "Invalid input! Please try again!"; //aka if they try drawing a line with the same start and end point

  }
  else if(x2 - x1 > 100) {

    std::cout << "horizontal"; //if they draw a horizontal line

  }
  else if(y2 - y1 > 70) {

	std::cout << "vertical"; //if they draw a vertical line

  }
}


void Logic::trackMouse(int &x, int &y, sf::Event &ev) {

  if (ev.type == sf::Event::MouseMoved) {
    std::cout << "new mouse x: " << ev.mouseMove.x << std::endl;
    std::cout << "new mouse y: " << ev.mouseMove.y << std::endl;
  }

}

void Logic::createLine() {

  


}