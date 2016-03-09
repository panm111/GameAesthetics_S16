int[][] grid = new int [50][50];
float cellsize;
int x = 12;
int y = 12;

void setup() {
  size(500, 500);
  cellsize = 500;
  noiseDetail(8, 0.5);

  for (int i = 0; i < 50; i+=1) {
    for (int j = 0; j < 50; j+=1) {
      grid[j][i] = floor(noise(j*0.1, i*0.1)*255);
    }
  }
}

void draw() {
  for (int i = 0; i < 50; i+=1) {
    for (int j = 0; j < 50; j+=1) {
      if (grid[j][i] < 100) {
        fill(100);
        //noStroke();
        rect(j * 10, i * 10, 10, 10);
      } else {
        fill(255);
        //noStroke();
        rect(j * 10, i * 10, 10, 10);
      }
    }
  }
  ellipseMode(CORNER);
  fill(0);
  ellipse(x * 10, y * 10, 10, 10);
  println(x + ", " + y);
  println(grid[x][y]);
}


void keyPressed() {
  if (key == CODED) {
    if (keyCode == UP) {
      if (grid[x][y-1] >= 100) {
        y--;
      }
    } else if (keyCode == DOWN) {
      if (grid[x][y+1] >= 100) {
        y++;
      }
    } else if (keyCode == LEFT) {
      if (grid[x-1][y] >= 100) {
        x--;
      }
    } else if (keyCode == RIGHT) {
      if (grid[x+1][y] >= 100) {
        x++;
      }
    }
  }
}