#ifndef TILE_H
#define TILE_H

#include <iostream>
#include <SFML/Graphics.hpp>

class Tile
{
private:
    int height;
    int width;
    sf::RectangleShape shape;
    sf::Color color;

public:
    Tile(float size);
    ~Tile();
    void update();
    void render(sf::RenderWindow &window);
};

#endif