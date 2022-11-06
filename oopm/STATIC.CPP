#include <iostream>
using namespace std;

class Player
{
private:
   static int count;
   string name;
public:
    string get_name() { return name; } 
    ~Player();
    Player ();
    Player (string name_val);
    
    static int get_count();
    
};

int Player :: count {0};

Player :: Player ()
    : Player {"None"}
{

}

Player :: Player (string name_val)
    : name {name_val}
{
    ++count;
}
Player::~Player() {
    --count;
}

int Player:: get_count() {
    return count;
}

void display_active_players() {
    cout << "Active players : " << Player::get_count() << endl;
}

int main (void)
{
    display_active_players();
    Player hero{"Hero"};
    display_active_players();
    
    {
        Player frank{"Frank"};
        display_active_players();
    }

    display_active_players();
    
    Player *enemy = new Player();
    display_active_players();
    delete enemy;
    display_active_players();    


    return 0;
}