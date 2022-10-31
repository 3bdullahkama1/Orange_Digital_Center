#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
using namespace sf;

int main()
{
    RenderWindow window(VideoMode(800, 600), "Circle...");

    CircleShape circle(100);
    circle.setFillColor(Color(150, 20, 50));
    circle.setPosition(Vector2f(200, 150));

    // 3 points for triangle shape...
    circle.setPointCount(3);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }
        }

        window.clear();
        window.draw(circle);
        window.display();
    }

    return 0;
}