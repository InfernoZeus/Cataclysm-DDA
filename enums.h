#ifndef _ENUMS_H_
#define _ENUMS_H_

#ifndef sgn
#define sgn(x) (((x) < 0) ? -1 : 1)
#endif

enum material {
MNULL = 0,
//Food Materials
VEGGY, FLESH, POWDER, HFLESH, //Human Flesh.
//Clothing
COTTON, WOOL, LEATHER, KEVLAR, FUR,
//Other
STONE, PAPER, WOOD, PLASTIC, GLASS, IRON, STEEL, SILVER
};

enum phase_id {
PNULL, SOLID, LIQUID, GAS, PLASMA
};

struct point {
 int x;
 int y;
 point(int X = 0, int Y = 0) : x (X), y (Y) {}
 point(const point &p) : x (p.x), y (p.y) {}
 ~point(){}
};

struct tripoint {
 int x;
 int y;
 int z;
 tripoint(int X = 0, int Y = 0, int Z = 0) : x (X), y (Y), z (Z) {}
 tripoint(const tripoint &p) : x (p.x), y (p.y), z (p.z) {}
 ~tripoint(){}
};

#endif
