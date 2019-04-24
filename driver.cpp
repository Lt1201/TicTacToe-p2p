

//will handle placing items on the board, players turns, win/tie conditions, and sending networked data.
#include "board.cpp"
#include "player.cpp"


int main(){

  Board board;
  board.printBoard();

  Player x('x');
  Player o('o');

  board.move(0,0,x.getSymbol());
  board.move(1,1,x.getSymbol());
  board.move(2,2,x.getSymbol());

  board.printBoard();
  if (board.checkWin(&x)){
    std::cout<<"xwin"<<std::endl;
  }

  return 0;
}
