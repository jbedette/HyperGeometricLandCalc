#include "card.h"
using namespace std;

Card::Card(){
  mv = -1;
  color = NULL;
  cost = NULL;
  supertype = NULL;
  type = NULL;
  name = "uninitialized";
}


Card::Card(string name, int mv, COLOR color, TYPE type){

  name = name;
  mv = mv;
  color = color;
  cost = NULL;
  supertype = NULL;
  type = type;
}

Card::~Card(){};

void Card::disp(){
  cout << "\n==========";
  cout << '\n' << name;
  cout << "\nmv: " << mv << ", ";
  cout << "color: " << color << ", ";
  cout << "type: " << type;
  cout << "\n==========";


};


  

