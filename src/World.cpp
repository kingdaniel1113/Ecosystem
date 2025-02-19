#include "../include/World.h"

World::World() : tileBasedGrid(height, width)
{
    return;
}

void World::update()
{
    tileBasedGrid.update();
    return;
}

void World::render(sf::RenderWindow &window)
{
    tileBasedGrid.render(window);
}