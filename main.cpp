
#include "./include.h"
// above is the include file for seperate libraries needed to run game
using namespace std;

void menu(player *p, enemy *e) {
  cout << "----->MAIN MENU<-----" << endl;
  cout << "1: Load save" << endl;
  cout << "2. Start" << endl;
  cout << "3. Exit" << endl;
  cout << "4. Choose character" << endl;
  short int main_choice;
  // choice is reused for choices requiring integer or character input
  char choice;
  cin >> main_choice;
  switch (main_choice) {
  case 1: {
    // file read
  }

  case 2: {
    // actual game body
    cout << "How big is your map?" << endl;
    // changes the max size of nxn matrix generation
    // generate within a range modulo an upper bound for nxn matrix dimension
    cout << "PRESS (A) FOR BIG ADVENTURE" << endl;
    cout << "PRESS (B) FOR MEDIUM ADVENTURE" << endl;
    cout << "PRESS (C) FOR SMALL ADVENTURE" << endl;
    cin >> choice;
    switch (choice) {
    case 'a': {
      // large map construction
      
    }
    case 'b': {
      // medium map construct
    }
    case 'c': {
      // small map construct
    }
    }
  }

  case 3: {
    // choose a character
  }

  case 4: {
    // quit
    cout << "Goodbye!" << endl;
    return;
  }

  default: {
    cout << "fix yo input dawg" << endl;
    return menu(p, e);
  }
  }
}

int main() {
  cout << "WELCOME, ADVENTURER, TO THE LONG AWAITED JOURNEY" << endl;
  cout << "[--------LVLQUEST 2.0-------]" << endl;
  char choice;
  char choice2;
  enemy *evil = new enemy();
  player *you = new player();
  string main_choice;
  menu(you, evil);

  {}
}