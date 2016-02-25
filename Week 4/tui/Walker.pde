class Walker {
  int x;
  int y;
  int numMoves = 0;
  int MAXMOVES = 500;

  Walker() {
    x = width/2;
    y = height/2;
  }

  void update() {
    if (numMoves < MAXMOVES) {
      int r = floor(random(4));
      if (r == 0) {
        y-=10;
      } else if (r == 1) {
        x+=10;
      } else if (r == 2) {
        y+=10;
      } else if (r == 3) {
        x-=10;
      }
      numMoves++;
    }
  }

  void draw() {
    //point(x, y);
    rect(x, y, 10, 10);
  }
}