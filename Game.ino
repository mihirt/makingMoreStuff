 
/*
  LED Game
  By: Mihir Trivedi
  
*/  
  
long randNumber1;
int val = 1;
int val2 = 1;
int val3 = 1;

int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int i = 0;
int ledbyte[4];

void setup() {                
 
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);     
  pinMode(led3, OUTPUT);     
  pinMode(led4, OUTPUT);     
  Serial.begin(9600);
  randomSeed(analogRead(1));
  //make sure pins are on low.
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  //random seed
  randomSeed(analogRead(0));
 
}





// the loop routine runs over and over again forever:
void loop() { 
  
  randomSeed(analogRead(0));    
  randNumber1 = random(2,6);

  while (randNumber1 == val) {
    randNumber1 = random(2,6);
  }     

 //First LED. 
  digitalWrite(randNumber1, HIGH);
  delay(700);
  val = randNumber1;
  digitalWrite(randNumber1, LOW);
  //Serial.println(randNumber1);
  //Serial.println(val);
  
  //Check to see if randNum is same. If so, change it.
  randNumber1 = random(2,6);
  while (randNumber1 == val) {
    randNumber1 = random(2,6);
  } 
  //write to 2nd LED
  digitalWrite(randNumber1, HIGH);
  delay(700);
  digitalWrite(randNumber1, LOW);
  val2 = randNumber1;


  //Check  
 randNumber1 = random(2,6);  
  while (randNumber1 == val || randNumber1 == val2)  {
    randNumber1 = random(2,6);
  } 
  //Write to 3rd LED 
  digitalWrite(randNumber1, HIGH);
  delay(700);
  digitalWrite(randNumber1, LOW);
    val3 = randNumber1;

  
  //Check
  randNumber1 = random(2,6);
  while (randNumber1 == val || randNumber1 == val2 || randNumber1 == val3) {
    randNumber1 = random(2,6);
  }
 
  //Write to 4th LED.
  digitalWrite(randNumber1, HIGH);
  delay(700);
  digitalWrite(randNumber1, LOW);
    val = randNumber1;
    
    
    while (Serial.available() > 0) {
                // read the incoming byte:
                incomingByte = Serial.read();

                // say what you got:
                incomingByte = incomingByte-48;
                Serial.print("I received: ");
                Serial.println(incomingByte);

                
                if (incomingByte == val[x]){
                  Serial.println(incomingByte);
                  Serial.println("Correct");
                }
                
                else {
                  Serial.println("Fail.");
                  //Serial.println(incomingByte);
                }
       x++; 
      }
      
      
}

    
  
  
  
  delay(1500);
}
