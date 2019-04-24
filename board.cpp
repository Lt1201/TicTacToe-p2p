#include <iostream>
#include "player.h"

//board class, manages movement
const int ARR_SIZE = 3;


class Board{
  public:
    Board(){
      int x;
      for(int y = 0; y < ARR_SIZE; y++){
        for( x = 0; x < ARR_SIZE; x++){
          m_boardArray[y][x] = '-';
        }
        x = 0;
      }

    }

    bool move(int y, int x, char symbol){
      if (m_boardArray[y][x] == '-'){
        m_boardArray[y][x] = symbol;
        return true;
      }else{
        return false;
      }
    }

    bool checkWin(Player *p){
      char symbol = p->getSymbol();
      //top row
      if((m_boardArray[0][0] == symbol) && (m_boardArray[0][1] == symbol) && (m_boardArray[0][2] == symbol)){
        return true;
      }
      //middle row
      else if((m_boardArray[1][0] == symbol) && (m_boardArray[1][1] == symbol) && (m_boardArray[1][2] == symbol)){
        return true;
      }
      //bottom row
      else if((m_boardArray[2][0] == symbol) && (m_boardArray[2][1] == symbol) && (m_boardArray[2][2] == symbol)){
        return true;
      }
      //-----------------------------------------------------------------------------------------------------
      //left column
      else if((m_boardArray[0][0] == symbol) && (m_boardArray[1][0] == symbol) && (m_boardArray[2][0] == symbol)){
        return true;
      }
      //middle column
      else if((m_boardArray[0][1] == symbol) && (m_boardArray[1][1] == symbol) && (m_boardArray[2][1] == symbol)){
        return true;
      }
      //right column
      else if((m_boardArray[0][2] == symbol) && (m_boardArray[1][2] == symbol) && (m_boardArray[2][2] == symbol)){
        return true;
      }
      //-----------------------------------------------------------------------------------------------------
      //diagonal right
      else if((m_boardArray[0][0] == symbol) && (m_boardArray[1][1] == symbol) && (m_boardArray[2][2] == symbol)){
        return true;
      }
      //diagonal left
      else if((m_boardArray[0][2] == symbol) && (m_boardArray[1][1] == symbol) && (m_boardArray[2][0] == symbol)){
        return true;
      }

      else{
        return false;
      }

    }

    void printBoard(){
      int x;
      for(int y = 0; y < ARR_SIZE; y++){
        for(x = 0; x < ARR_SIZE; x++){
          std::cout<<m_boardArray[y][x]<<" ";
        }
        std::cout<<"\n";
      }
    }

  private:
    char m_boardArray[ARR_SIZE][ARR_SIZE];
};
