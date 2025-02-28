#include "../include/Tile.h"

Tile::Tile(float size, sf::Vector2f position, std::string type) : height(size), width(size), pos(position), type(type)
{
    this->height = size;
    this->width = size;
    this->pos.x = this->pos.x * height;
    this->pos.y = this->pos.y * width;
    changeTileType(type);
    std::cout << "Tile generated successfully:\n"
              << "x: " << this->pos.x << ", y: " << this->pos.y << "\n"
              << "height: " << this->height << ", width: " << this->width
              << std::endl;
}

Tile::~Tile()
{
}

void Tile::update()
{
    shape.setPosition(pos.x, pos.y);
    shape.setSize(sf::Vector2f(width, height));
    shape.setFillColor(this->color);
    return;
}

void Tile::render(sf::RenderWindow &window)
{
    window.draw(shape);
}

void Tile::changeTileType(std::string newType)
{
    static const std::unordered_map<std::string, int> tileTypes = {
        {"grass", 0},
        {"water", 1}};
    auto it = tileTypes.find(newType);
    if (it != tileTypes.end())
    {
        // Globally Applied Tile Configs
        this->type = newType;

        // Specially Applied Tile Configs
        int newTypeInt = it->second;
        switch (newTypeInt)
        {
        case 0:
            // Grass Tile
            this->color = sf::Color::Green;
            break;
        case 1:
            // Water Tile
            this->color = sf::Color::Blue;
            break;
        }
    }
}