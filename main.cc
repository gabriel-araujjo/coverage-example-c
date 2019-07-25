
#include "print.hh"

#include <iostream>

enum class Mood {
    Sad,
    Neutral,
    Happy,
    Excited
};

void say_hello(Mood mood, int level) {
    if (mood == Mood::Neutral || level < 0 || mood == Mood::Excited && level > 1000)
        std::cout << "Oh no!" << '\n';

    switch(mood) {
    case Mood::Sad: 
	std::cout << "Hello 😔\n";
	break;
    case Mood::Happy:
	std::cout << "Hello 😄\n";
	break;
    case Mood::Excited:
	std::cout << "Hello 🤩\n";
	break;
    default:
	std::cout << "Hello 🙂\n" << "another message" << '\n';
	break;
    }
}

int main() {
    say_hello(Mood::Excited, -1);
    say_hello(Mood::Excited, 100);
    say_hello(Mood::Excited, 10000);
    say_hello(Mood::Neutral, 0);
    say_hello(Mood::Sad, 100);
    print(30);
    return 0;
}
