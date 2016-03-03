float[][] grid = new float[500][500];
float cellsize;
int x = 250;
int y = 250;

void setup(){
  size(500,500);
  cellsize = 500;
  
  for(int i = 0; i < cellsize; i+=10){
   for(int j = 0; j < cellsize; j+=10){
      grid[j][i] = random(0,1);
   }
  }
  
  grid[x][y] = 'X';

  
}//end of setup

void draw(){
  for(int i = 0; i < cellsize; i+=10){
  for(int j = 0; j < cellsize; j+=10){
     if(grid[j][i] <= 0.501){
          fill(0);
          noStroke();
          rect(i,j, 10,10);
      }else{
          fill(255);
          noStroke();
          rect(i,j, 10,10);
      }
      if(j ==x && i ==y){
         grid[j][i] = 'X';
         fill(255,0,0);
         ellipseMode(CORNER);
         ellipse(j,i,10,10);
      }
    }
  }
  print(grid[x][y]);
}//end of draw


void keyPressed(){
  if(key == CODED){
    if (keyCode == UP){
      text(grid[x][y], x, y-=10);
    }else if(keyCode == DOWN){
       text(grid[x][y], x, y+=10);
    }else if(keyCode == LEFT){
      text(grid[x][y], x-=10, y);
    }else if(keyCode == RIGHT){
      text(grid[x][y], x+=10, y);
    }
  }
} //end of key pressed