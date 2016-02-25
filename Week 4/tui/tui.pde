Walker walker;

int cols = 500;
int rows = 500;
char[][] myArray = new char[cols][rows];
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
    }
  }
  
  myArray[x][y] = 'X';
  
  walker = new Walker();
  
}//end of setup

void draw () {
  background(0);
  //loop through array again
   for (int i = 0; i < cols; i++) {
    for (int j = 0; j < rows; j++) {
      text(myArray[i][j], i*2, j*2);
    }
  }
  text(myArray[x][y], posX, posY);
  
  
  walker.update();
  walker.draw();
  
}//end of draw

void keyPressed(){
  if(key == CODED){
    if (keyCode == UP){
      text(myArray[x][y], posX, posY-=5);
      
      for (int i = 0; i < 10; i+=5){
       for (int j = 0; j < 10; j+=5){
         myArray[i][j] = 'O';
       }
      } 
      // I tried to create the walker using the array 
      //but it is appearing out really weirdly like, it 
      //would come out in the center, and then randomly at 
      //the origin point. I tried to translate it but it is 
      //not responding to it.
      
    }else if(keyCode == DOWN){
       text(myArray[x][y], posX, posY+=5);
    }else if(keyCode == LEFT){
      text(myArray[x][y], posX-=5, posY);
    }else if(keyCode == RIGHT){
      text(myArray[x][y], posX+=5, posY);
    }
    
  }
  
}//end of keypressed