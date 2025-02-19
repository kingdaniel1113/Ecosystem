#include "../include/Tile.h"

Tile::Tile(float size)
{
    float height, width = size;
    shape.setSize(sf::Vector2f(width, height));
    shape.setFillColor(sf::Color::Green);
}

Tile::~Tile()
{
}

void Tile::update()
{
    return;
}

void Tile::render(sf::RenderWindow &window)
{
    window.draw(shape);
}