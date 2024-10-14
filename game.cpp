#include <SFML/Graphics.hpp>

int main()
{
    // T?o c?a s? �? h?a
    sf::RenderWindow window(sf::VideoMode(800, 600), "Game");

    // T?o m?t h?nh vu�ng
    sf::RectangleShape square(sf::Vector2f(50, 50));
    square.setFillColor(sf::Color::Red);

    // V?ng l?p game
    while (window.isOpen())
    {
        // X? l? s? ki?n
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        // V? h?nh vu�ng
        window.clear();
        window.draw(square);
        window.display();
    }

    return 0;
}

