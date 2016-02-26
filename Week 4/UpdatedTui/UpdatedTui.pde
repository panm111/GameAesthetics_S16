//Walker walker;

int x;
int y;
char[][] grid;
int cellsize = 10;

void setup() {
  size(500, 500);

  grid = new char[width/cellsize][height/cellsize];

  for (int i = 0; i < height/cellsize; i++) {
    for (int j = 0; j < width/cellsize; j++) {
      grid[j][i] = '#';
    }
  }

  x = (width/cellsize)/2; //goes to 25
  y = (height/cellsize)/2;

  grid[x][y] = 'X';


  //walker = new Walker();
}

void draw() {
  background(0);

  for (int i=0; i<height/cellsize; i++) {
    for (int j=0; j<width/cellsize; j++) {
      if (abs(j-x)<5 && abs(i-y)<5) {
        grid[j][i] = '-';
      } else {
        grid[j][i] = ' ';
      }//abs makes values positive
      if (j==x && i==y) {
        grid[j][i] = 'O';
      }
    }
  }

  for (int i = 0; i < height/cellsize; i++) {
    for (int j = 0; j < width/cellsize; j++) {
      text(grid[j][i], j*cellsize, i*cellsize);
    }
  }

  //walker.update();
  //walker.draw();
} // end of draw loop

void keyPressed(){
  if(key == CODED){
    if (keyCode == UP){
      text(grid[x][y], x, y--);
    }else if(keyCode == DOWN){
       text(grid[x][y], x, y++);
    }else if(keyCode == LEFT){
      text(grid[x][y], x--, y);
    }else if(keyCode == RIGHT){
      text(grid[x][y], x++, y);
    }
  }
} //end of key pressed

//class Walker {
//  int x;
//  int y;
//  int numMoves = 0;
//  int MAXMOVES = 400;

//  Walker() {
//    x = (width/cellsize)/2;
//    y = (height/cellsize)/2;
//  }

//  void update() {
//    if (numMoves < MAXMOVES) {
//      int r = floor(random(4));
//      if (r == 0) {
//        y--;
//      } else if (r == 1) {
//        x++;
//      } else if (r == 2) {
//        y++;
//      } else if (r == 3) {
//        x--;
//      }
//      numMoves++;
//    }
//    grid[x][y] = '.';
//  }

//  void draw() {
//    //stroke(255);
//    //ellipse(x*cellsize, y*cellsize, cellsize, cellsize);
//    //point(x, y);
//  }
//}