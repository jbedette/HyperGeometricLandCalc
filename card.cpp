#include "card.h"
using namespace std;

Card::Card(){
  mv = -1;
  color = NULL;
  cost = NULL;
  supertype = NULL;
  type = NULL;
}


Card::Card(
    int mv, 
    COLOR color, 
    TYPE type
    ){

  mv = mv;
  color = color;
  cost = NULL;
  supertype = NULL;
  type = type;
}

Card::~Card(){};

void Card::disp(){

};


  

