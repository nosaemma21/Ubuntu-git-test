#include <iostream>
#include <string>
// #include <vector>

using namespace std;

class Player {
public:
  string name{"Player"};
  int health;
  int xp;

  void talk(string text_to_say) {
    cout << name << " says " << text_to_say << endl;
  };

  bool is_dead();
};

class Account {
public:
  string name;
  double balance{0.0};

  void deposit(double bal) {
    balance += bal;
    cout << "In deposit" << endl;
  };

  void withdraw(double bal) {
    balance -= bal;
    cout << "In withdrawal" << endl;
  };
};

int main() {
  Player frank;
  frank.name = "Frank";
  frank.health = 100;
  frank.xp = 12;
  frank.talk("Are you good");

  Player *enemy = new Player;
  (*enemy).name = "enemy";
  (*enemy).health = 100;
  enemy->xp = 22; // member pointer
  enemy->talk("I will destroy the hero");

  Account frank_account;
  frank_account.name = "Franks Account";
  frank_account.balance = 50000;
  frank_account.deposit(2000);
  frank_account.withdraw(500);

  return 0;
}
