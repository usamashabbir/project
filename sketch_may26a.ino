//hardware
int led = 3;
int button = 2;

unsigned long elapsedTime;
unsigned long endTime;
unsigned long startTime;


int buttonState = 0;


void setup()
{
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  
  
  
  
  buttonState = digitalRead(button);
  
  //testing
  digitalWrite(button, HIGH);
  delay(5100);
  digitalWrite(button, LOW);
  
  
  
  if (buttonState == HIGH)
  {
    digitalWrite(led, LOW);
    
    //Get time
    
    //Start Time
    startTime = millis();
    
  }
  
  else 
  {
    digitalWrite(led, LOW);
    
    //endtime
    endTime = millis();
  }
  
  
  //Calculate time
  elapsedTime = endTime - startTime;
  
  
  //Calculate Price
  //if less than 5 seconds its free
  if (elapsedTime  < 5000.00)
  {
    Serial.print("Free Parking!");
    
  }
  
  //if more than 5 seconds 
  if (elapsedTime  > 5000.00)
  {
    Serial.print("Parking fee = AUD 3.00");
    
  }
  
  //if more than 10 seconds 
  if (elapsedTime  > 10000.00)
  {
    Serial.print("Parking fee = AUD 8.00");
    
  }
  
  
}
