float[][] grid = new float[500][500];
float cellsize;

void setup(){
  size(500,500);
  cellsize = 500;
  
  for(int i = 0; i < cellsize; i+=10){
   for(int j = 0; j < cellsize; j+=10){
      grid[j][i] = random(0,1);
   }
  }
  
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
    }
  }
  
}//end of draw