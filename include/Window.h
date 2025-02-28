#ifndef WINDOW_H
#define WINDOW_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include "World.h"

class Window
{
private:
    int windowHeight;
    int windowWidth;
    sf::RenderWindow window;
    World world;
    sf::View mainView;
    void processInputs();
    // std::vector<sf::RectangleShape &> myRectangles;

public:
    Window();
    void run();
    // void generateGrid(int posx, int posy);
};

#endif
