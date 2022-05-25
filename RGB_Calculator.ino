//define pins 
#define BLUE 3
#define GREEN 5
#define RED 6

int redValue;
int greenValue;
int blueValue;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(RED,OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(BLUE,OUTPUT);
  digitalWrite(RED,LOW);
  digitalWrite(GREEN,LOW);
  digitalWrite(BLUE,LOW);

  Serial.println("please enter your answer: 4 + 4 = ?");
while(Serial.available() == 0){
    redValue = 0;
    greenValue = 0;
    blueValue = 255;

    digitalWrite(RED,redValue);
    digitalWrite(GREEN,greenValue);
    digitalWrite(BLUE,blueValue);
    delay(200);

    redValue = 0;
    greenValue = 0;
    blueValue = 0;

    digitalWrite(RED,redValue);
    digitalWrite(GREEN,greenValue);
    digitalWrite(BLUE,blueValue);
    delay(200);

    if(Serial.available() == 1){
      continue;
    }
    
  }
  if(Serial.parseInt() == 8){
      redValue = 0;
      greenValue = 0;
      blueValue = 0;
      delay(200);

      digitalWrite(RED,redValue);
      digitalWrite(GREEN,greenValue);
      digitalWrite(BLUE,blueValue);
      
      redValue = 0;
      greenValue = 255;
      blueValue = 0;

      digitalWrite(RED,redValue);
      digitalWrite(GREEN,greenValue);
      digitalWrite(BLUE,blueValue);

      Serial.println("CONGRATULATIONS, you got the answer correct");
      
    }

    else{
      redValue = 255;
      greenValue = 0;
      blueValue = 0;
      delay(200);

      digitalWrite(RED,redValue);
      digitalWrite(GREEN,greenValue);
      digitalWrite(BLUE,blueValue);

      Serial.println("The answer you inputted was incorrect press the reset button to try again ");
      Serial.println("GAME OVER!!!");
    }

 
}

//defining LED variables


//main loop
void loop() {
  // put your main code here, to run repeatedly:
  
  
}
