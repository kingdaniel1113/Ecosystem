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

public:
    TileBasedGrid(int worldHeight, int worldWidth);
    ~TileBasedGrid();
    void update();
    void render(sf::RenderWindow &window);
};

#endif