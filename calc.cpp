//John Bedette 2022
//mit liscence, blah blah blah
#include "calc.h"

using namespace std;

//goal 1
//
//given:
//  num cards in hand
//  num cards in deck
//  num lands in deck
//what is the probablity of getting a certain number of lands by turn N


int parseIntFromArg(string in){
  int x = -1;
  try{
    size_t pos;
    x = stoi(in, &pos);
    if ( pos < in.size()){
      cerr << "Traling chars after num: " <<  in << '\n';
    }
  }
  catch(invalid_argument const &ex){
    cerr << "Invalid num: " << in << '\n';
  }
  catch(out_of_range const &ex){
    cerr << "Num out of range: " << in << '\n';
  }
  return x;
}

int main(int argc, char * argv[]){
  int handSize, deckSize, landsDeck, landsHand;
  handSize = parseIntFromArg(argv[1]);
  deckSize = parseIntFromArg(argv[2]);
  landsDeck = parseIntFromArg(argv[3]);
  landsHand = parseIntFromArg(argv[4]);

  Card ** deck = NULL;

  for( int i = 0; i < deckSize; ++i){

  }



  return 0;
}



