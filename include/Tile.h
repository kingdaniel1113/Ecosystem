#ifndef TILE_H
#define TILE_H

#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include <unordered_map>

struct GrassTile;

class Tile
{
private:
    float height, width;
    sf::Vector2f pos;
    sf::RectangleShape shape;

    std::string type;
    sf::Color color;

public:
    Tile(float size, sf::Vector2f position, std::string type);
    ~Tile();
    void update();
    void render(sf::RenderWindow &window);
    void changeTileType(std::string newType);
};

struct GrassTile
{
    sf::Color color = sf::Color::Green;
};

#endif