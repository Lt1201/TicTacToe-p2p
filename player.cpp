#include "player.h"
//player's object with symbol, name, total moves, and other small things

Player::Player(){
  m_symbol = ' ';
  m_winner = false;
}

Player::Player(char symbol){
  m_symbol = symbol;
  m_winner = false;
}

bool Player::setWin(){
  m_winner = true;
  return m_winner;
}

char Player::getSymbol(){
  return m_symbol;
}
