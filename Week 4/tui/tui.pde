//Walker walker;

int cols = 500;
int rows = 500;
char[][] myArray = new char[cols][rows];
//char[][] map = new char[50][50];
int width = 500;
int height = 500;
int posX = width/2;
int posY = height/2;
int x = width/2;
int y = height/2;
float randNum = random(-5, 5);

void setup() {
  size(500, 500);
  for (int i = 0; i < cols; i+= 5) {
  for (int j = 0; j < rows; j+= 5) {
    myArray[i][j] = ' ';
    //text(myArray[i][j], i*2, j*2);
  }
  }
  
  //for(int i = 0; i < 50; i+=5){
  //   for(int j = 0; j <50; j+= 5){
  //    map[i][j] = 'O';
  //    //text(map[i][j], i*2, j*2);
  //   }
  //}
  
  //myArray[x][y] = 'X';
  
  //walker = new Walker();
  
}//end of setup

void draw () {
  //background(0);
  //loop through array again
  //text(myArray[x][y], posX, posY);
  
  for (int i = 0; i < cols; i+=5) {
   for (int j = 0; j < rows; j+=5) {
     text(myArray[i][j], i*2, j*2);
     if(j==x && i ==y){
        text('X', j, i); 
     }
     
     if (abs(j-x)<2 && abs(i-y)<2){
        text('O', j, i); 
     }
     
   }
  }
  
  
  
  //walker.update();
  //walker.draw();
  
}//end of draw

void keyPressed(){
  if(key == CODED){
    if (keyCode == UP){
      text(myArray[x][y], posX, posY-=10);
    }else if(keyCode == DOWN){
       text(myArray[x][y], posX, posY+=10);
    }else if(keyCode == LEFT){
      text(myArray[x][y], posX-=10, posY);
    }else if(keyCode == RIGHT){
      text(myArray[x][y], posX+=10, posY);
    }
  }
  
}//end of keypressed