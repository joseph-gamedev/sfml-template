#include <SFML/Graphics.hpp>

int WinMain() {
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Example");

    // Create a circle shape
    sf::CircleShape circle(100.f);
    circle.setFillColor(sf::Color::Green);
    circle.setPosition(350.f, 250.f);

    // Main loop
    while (window.isOpen()) {
        // Process events
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear the window
        window.clear();

        // Draw the circle
        window.draw(circle);

        // Display the window
        window.display();
    }

    return 0;
}
