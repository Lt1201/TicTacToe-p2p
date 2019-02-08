//board class, manages movement
const ARR_SIZE = 3;


class board{
  public:
    board(){
      m_boardArray = new char[ARR_SIZE][ARR_SIZE];
      for(int y = 0; y < ARR_SIZE; i++){
        for(int x = 0; x < ARR_SIZE; j++){
          m_boardArray[y][x] = NULL;
        }
        j = 0;
      }

    }

    bool move(int x, int y, char symbol){
      if (m_boardArray[y][x] == NULL){
        m_boardArray[y][x] = symbol;
        return true;
      }else{
        return false;
      }
    }

    bool checkWin(player &p){
      char symbol = p->getSymbol();

      if(m_boardArray[0][0] == symbol && m_boardArray[1][0])
      //FRUIT



    }

  private:
    char m_boardArray[][];
}
