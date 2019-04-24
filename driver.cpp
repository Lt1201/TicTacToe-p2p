

//will handle placing items on the board, players turns, win/tie conditions, and sending networked data.
#include "board.cpp"
#include "player.cpp"


int main(){

  Board board;
  board.printBoard();

  Player x('x');
  Player o('o');

  board.move(0,0,o.getSymbol());
  board.move(0,1,o.getSymbol());
  board.move(0,2,o.getSymbol());

  board.printBoard();
  if (board.checkWin(&o)){
    std::cout<<"owin"<<std::endl;
  }

  return 0;
}
