#ifndef WORLD_H
#define WORLD_H

#include "TileBasedGrid.h"

class World
{
private:
    int height = 100; // In tiles
    int width = 100;  // In tiles
    TileBasedGrid tileBasedGrid;

public:
    World();
    void update();
    void render(sf::RenderWindow &window);
};

#endif
