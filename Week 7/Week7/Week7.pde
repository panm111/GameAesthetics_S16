int[][] grid = new int [100][100];
float cellsize;
int x = 12;
int y = 12;

PImage tree;
PImage water;
PImage front;
PImage back;
PImage right;
PImage left;
PImage grass;

float centerX = 250;
float centerY = 250;

void setup() {
  size(1000, 1000);
  //cellsize = 50;
  //noiseDetail(8, 0.5);
  
  tree = loadImage("tree.png");
  water = loadImage("water.png");
  front = loadImage("front.png");
  back = loadImage("back.png");
  right = loadImage("right.png");
  left = loadImage("left.png");
  grass = loadImage("grass.png");


  for (int i = 0; i < 100; i+=1) {
    for (int j = 0; j < 100; j+=1) {
      grid[j][i] = floor(noise(j*0.15, i*0.15)*255);
    }
  }
  
  
}

void draw() {
  for (int i = 0; i < 50; i+=1) {
    for (int j = 0; j < 50; j+=1) {
      if (grid[j][i] < 100) {
        //fill(0,0,255);
        //noStroke();
        //rect(j * 10, i * 10, 10, 10);
        image(water, j*20, i*20,20,20);
      } else if (grid[j][i] > 100 && grid[j][i] <125){
        //fill(0,255,0);
        //noStroke();
        //rect(j * 10, i * 10, 10, 10);
        image(tree, j*20,i*20, 20,20);
      }else{
        image(grass,j * 20, i * 20,20,20);
      }
    }
  }
  //ellipseMode(CORNER);
  //fill(0);
  //ellipse(x * 10, y * 10, 10, 10);
  //println(x + ", " + y);
  //println(grid[x][y]);

  //image(front, x*10, y*10, 10,10);
  if(keyPressed == true){
     if(key == CODED){
        if(keyCode == UP){
          image(back, x * 20, y * 20,20,20);
        }else if(keyCode==DOWN){
          image(front,x * 20, y * 20,20,20);
        }else if(keyCode == LEFT){
          image(left,x * 20, y * 20,20,20);
        }else if(keyCode==RIGHT){
          image(right,x * 20, y * 20,20,20);
        }
     }
  }


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