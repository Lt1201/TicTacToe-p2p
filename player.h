#ifndef PLAYER_H //Head guard
#define PLAYER_H

//include packages here



//class definition

class Player{
  public:
    Player();
    Player(char);
    bool setWin();
    char getSymbol();
  private:
    char m_symbol;
    bool m_winner;
};

#endif //end header guard
