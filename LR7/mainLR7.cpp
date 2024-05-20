#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1024, 768), "Moving Objects");

    sf::CircleShape object1(10);
    object1.setFillColor(sf::Color::Red);
    object1.setPosition(100, 300);

    sf::CircleShape object2(30);
    object2.setFillColor(sf::Color::Blue);
    object2.setPosition(500, 300);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Перемещение объектов при нажатии клавиш стрелок
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && object1.getPosition().x > 0)
            object1.move(-0.5, 0);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && object1.getPosition().x < window.getSize().x - object1.getRadius() * 2)
            object1.move(0.5, 0);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && object1.getPosition().y > 0)
            object1.move(0, -0.5);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && object1.getPosition().y < window.getSize().y - object1.getRadius() * 2)
            object1.move(0, 0.5);

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && object2.getPosition().x > 0)
            object2.move(-0.5, 0);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && object2.getPosition().x < window.getSize().x - object2.getRadius() * 2)
            object2.move(0.5, 0);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && object2.getPosition().y > 0)
            object2.move(0, -0.5);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && object2.getPosition().y < window.getSize().y - object2.getRadius() * 2)
            object2.move(0, 0.5);

        // Проверка на столкновение объектов
        if (object1.getGlobalBounds().intersects(object2.getGlobalBounds()))
        {
            object1.setFillColor(sf::Color::Green);
            object2.setFillColor(sf::Color::Yellow);
        }
        else
        {
            object1.setFillColor(sf::Color::Red);
            object2.setFillColor(sf::Color::Blue);
        }

        window.clear();
        window.draw(object1);
        window.draw(object2);
        window.display();
    }

    return 0;
}