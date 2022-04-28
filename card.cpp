enum COLOR {WHITE, BLUE, BLACK, RED, GREEN, COLORLESS, GENERIC};
enum SUPERTYPE {PERMANENT, TOKEN, STACK};
enum TYPE {ARTIFACT, CREATURE, ENCHANTMENT, INSTANT, PLANESWALKER, SORCERY, LAND};
//enum SUBTYPE{ELF, ETC};
struct Card{
  int mv;
  COLOR * color;
  COLOR ** cost;
  SUPERTYPE * supertype;
  TYPE * type;

  Card();
//  Card(int, COLOR, COLOR **, SUPERTYPE, TYPE);
  Card(int, COLOR, TYPE);
};

Card::Card(){
  mv = -1;
  color = NULL;
  cost = NULL;
  supertype = NULL;
  type = NULL;
}

/*
Card::Card(
    int mv, 
    COLOR color, 
    COLOR ** cost, 
    SUPERTYPE supertype, 
    TYPE type
    ){
  mv = mv;
  color = color;
  cost = cost;
  supertype = supertype;
  type = type;
}
*/

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
  

