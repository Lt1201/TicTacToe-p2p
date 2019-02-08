#ifndef PLAYER_H //Head guard
#define PLAYER_H

//include packages here



//class definition

class player{
  public:
    player();
    bool setWin();
    char getSymbol();
  private:
    char m_symbol;
    bool winner;
}

#endif //end header guard
