#include "../include/Window.h"

Window::Window()
{
    window.create(sf::VideoMode({800, 600}), "Ecosystem");
}

void Window::run()
{
    int ticks = 0;
    // Main loop: keeps the window open and processes events
    while (window.isOpen())
    {

        if (ticks % 10 == 0)
        {
            std::cout << "Tick: " << ticks << std::endl;
        }
        processInputs();
        world.update();
        window.clear();
        world.render(window);
        window.display();
        ticks++;
    }
}

void Window::processInputs()
{
    sf::Event event;
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        {
            window.close();
        }
        if (event.type == sf::Event::Resized)
        {
            window.setView(sf::View(sf::FloatRect(0, 0, event.size.width, event.size.height)));
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            std::cout << "Mouse button press detected at: " << event.mouseButton.x << ", " << event.mouseButton.y << std::endl;
        }
    }
}

//     if (ticks % 10000 == 0)
//     {
//         std::cout << "Tick: " << ticks << std::endl;
//     }
//     sf::Event event;
//     shape.setRadius(50);
//     // Event handling (check if the user closes the window)
//     while (window.pollEvent(event))
//     {
//         if (event.type == sf::Event::Closed)
//         {
//             window.close(); // Close the window if the user requests it
//         }
//         if (event.type == sf::Event::Resized)
//         {
//             window.setView(sf::View(sf::FloatRect(0, 0, event.size.width, event.size.height)));
//         }
//         if (event.type == sf::Event::MouseButtonPressed)
//         {
//             std::cout << "Mouse button press detected at: " << event.mouseButton.x << ", " << event.mouseButton.y << std::endl;
//             generateGrid(event.mouseButton.x, event.mouseButton.y);
//             std::cout << std::endl;
//         }
//     }

//     // Clear the window to prepare for the next frame
//     window.clear();

//     // Draw the circle shape
//     window.draw(shape);
//     for (int i = 0; i < myRectangles.size(); i++)
//     {
//         window.draw(myRectangles[i]);
//     }

//     // Display the contents of the window (renders everything we drew)
//     window.display();
//     ticks++;
// }
// }

// void Window::generateGrid(int posx, int posy)
// {
//     std::cout << "Generating rectangle" << std::endl;
//     sf::Vector2u size = window.getSize();
//     int height = size.x;
//     int width = size.y;
//     sf::Color color = sf::Color::Green;
//     sf::RectangleShape line(sf::Vector2f(10, 10));
//     line.setPosition(sf::Vector2f(posx, posy));
//     line.setFillColor(color);
//     myRectangles.push_back(shape);
//     std::cout << "Rectangle generated: \nSize: " << height << ", " << width << "\n Position:" << posx << ", " << posy << std::endl;
// }