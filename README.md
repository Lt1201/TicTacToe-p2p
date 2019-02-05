# TicTacToe-p2p

TicTacToe with a peer to peer connection. Or rather a host and connecting node.

Written in C++. Displays using "UKNOWN"
Networking is handled using UPNP protocol (or will be... might change)
  - Data is sent to each client, and verified after each turn. (identical board states)

Classes are broken up into 3 different sections. Player, board, and networking. This should make it easier to organize flow  
