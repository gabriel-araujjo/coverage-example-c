#include <iostream>

enum class Mood {
    Sad,
    Neutral,
    Happy,
    Excited
};

void say_hello(Mood mood) {
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
    say_hello(Mood::Neutral);
    return 0;
}
