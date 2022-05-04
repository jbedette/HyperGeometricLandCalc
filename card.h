#include <iostream>
#include <string>

enum COLOR {WHITE, BLUE, BLACK, RED, GREEN, COLORLESS, GENERIC, ERR};
enum SUPERTYPE {PERMANENT, TOKEN, STACK, ERR};
enum TYPE {ARTIFACT, CREATURE, ENCHANTMENT, INSTANT, PLANESWALKER, SORCERY, LAND, ERR};


struct Card{
  string name;
  int mv;
  COLOR * color;
  COLOR ** cost;
  SUPERTYPE * supertype;
  TYPE * type;

  Card();
  Card(string, int, COLOR, TYPE);
  ~Card();
  void disp();
};