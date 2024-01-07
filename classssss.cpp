#include <iostream>
using namespace std;
class Game {
public:
 void play(); // Function declaration
};
// function definition outside the class
void Game::play() {
 cout << "Function defined outside the class.\n";
}
int main() {
Game g;
g.play();
 return 0;
}