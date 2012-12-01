// Full Color LED fader 
// Written by Dain Unicorn based on code by EgoPlast 


int RedLED = 9; 
int BluLED = 6;
int GrnLED = 3;  
int  RedFade;
int  BluFade;
int  GrnFade;

void setup () {
 pinMode (11, OUTPUT); 
 pinMode (RedLED, OUTPUT);
 pinMode (BluLED, OUTPUT);
 pinMode (GrnLED, OUTPUT);
 }
  
 void loop () {
  digitalWrite(11,HIGH); // Enable the circuit
  analogWrite(RedLED, 255); //Turns off the RED Element
  analogWrite(GrnLED, 255); //Turns off the GREEN Element
  analogWrite(BluLED, 255); //Turns off the BLUE Element
 delay(1000);

// Red Element fade
/*
  for(int fadeValue = 255 ; fadeValue >= 100; fadeValue -=5) { 
    analogWrite(RedLED, fadeValue);         
    delay(20);                            
  } 
  for(int fadeValue = 100 ; fadeValue <= 255; fadeValue +=5) { 
    analogWrite(RedLED, fadeValue);         
    delay(20);                            
  }
  
// Green Element Fade  
  
  for(int fadeValue = 255 ; fadeValue >= 100; fadeValue -=5) { 
    analogWrite(GrnLED, fadeValue);         
    delay(20);                            
  } 
  for(int fadeValue = 100 ; fadeValue <= 255; fadeValue +=5) { 
    analogWrite(GrnLED, fadeValue);         
    delay(20);                            
  }
  
// Blue Element Fade

  for(int fadeValue = 255 ; fadeValue >= 100; fadeValue -=5) { 
    analogWrite(BluLED, fadeValue);         
    delay(20);                            
  } 
  for(int fadeValue = 100 ; fadeValue <= 255; fadeValue +=5) { 
    analogWrite(BluLED, fadeValue);         
    delay(20);                            
  } 
  
// Red+Green Elements Fade

  for(int fadeValue = 255 ; fadeValue >= 100; fadeValue -=5) { 
    analogWrite(RedLED, fadeValue);         
    analogWrite(GrnLED, fadeValue);         
    delay(20);                            
  } 
  for(int fadeValue = 100 ; fadeValue <= 255; fadeValue +=5) { 
    analogWrite(RedLED, fadeValue);         
    analogWrite(GrnLED, fadeValue);         
    delay(20);                            
  } 

// Green+Blue Elements Fade

  for(int fadeValue = 255 ; fadeValue >= 100; fadeValue -=5) { 
    analogWrite(GrnLED, fadeValue);         
    analogWrite(BluLED, fadeValue);         
    delay(20);                            
  } 
  for(int fadeValue = 100 ; fadeValue <= 255; fadeValue +=5) { 
    analogWrite(GrnLED, fadeValue);         
    analogWrite(BluLED, fadeValue);         
    delay(20);                            
  } 

// Blue+Red Elements Fade

  for(int fadeValue = 255 ; fadeValue >= 100; fadeValue -=5) { 
    analogWrite(RedLED, fadeValue);         
    analogWrite(BluLED, fadeValue);         
    delay(20);                            
  } 
  for(int fadeValue = 100 ; fadeValue <= 255; fadeValue +=5) { 
    analogWrite(RedLED, fadeValue);         
    analogWrite(BluLED, fadeValue);         
    delay(20);                            
  } 


// All Elements Fade

  for(int fadeValue = 255 ; fadeValue >= 100; fadeValue -=5) { 
    analogWrite(RedLED, fadeValue);         
    analogWrite(GrnLED, fadeValue);         
    analogWrite(BluLED, fadeValue);         
    delay(20);                            
  } 
  for(int fadeValue =100 ; fadeValue <= 255; fadeValue +=5) { 
    analogWrite(RedLED, fadeValue);         
    analogWrite(GrnLED, fadeValue);         
    analogWrite(BluLED, fadeValue);         
    delay(20);                            
  } 
  */
  analogWrite(RedLED,0);
  analogWrite(GrnLED,30);
  analogWrite(BluLED,230);
  delay(1000);

 }
