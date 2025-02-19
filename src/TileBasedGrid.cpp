#include "../include/TileBasedGrid.h"

TileBasedGrid::TileBasedGrid(int worldHeight, int worldWidth)
{
    for (int row = 0; row < worldHeight; row++)
    {
        std::vector<std::shared_ptr<Tile>> newRow;
        for (int col = 0; col < worldWidth; col++)
        {

            std::shared_ptr<Tile> newTile = std::make_shared<Tile>(pixelsPerTile);
            newRow.push_back(newTile);
        }
        tileMap.push_back(newRow);
    }
    std::cout << "TileBasedGrid constructed" << std::endl;
}

TileBasedGrid::~TileBasedGrid()
{
    std::cout << "TileBasedGrid destroyed" << std::endl;
}

void TileBasedGrid::update()
{
    for (int row = 0; row < tileMap.size(); row++)
    {
        for (int col = 0; col < tileMap[row].size(); col++)
        {
            tileMap[row][col]->update();
        }
    }
}

void TileBasedGrid::render(sf::RenderWindow &window)
{
    for (int row = 0; row < tileMap.size(); row++)
    {
        for (int col = 0; col < tileMap[row].size(); col++)
        {
            tileMap[row][col]->render(window);
        }
    }
}