#ifndef TILEBASEDGRID_H
#define TILEBASEDGRID_H

#include <vector>
#include <memory>
#include "Tile.h"

class TileBasedGrid
{
private:
    const int pixelsPerTile = 30;
    std::vector<std::vector<std::shared_ptr<Tile>>> tileMap;
    static const std::unordered_map<std::string, int> tileTypes;

public:
    TileBasedGrid(int worldHeight, int worldWidth);
    ~TileBasedGrid();
    void generateTiles(int worldHeight, int worldWidth);
    void update();
    void render(sf::RenderWindow &window);
};

#endif