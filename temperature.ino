void setup()
{
  
  pinMode(A5, INPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
 
  
  
  Serial.begin(9600);
}

void loop()
{
  
 
 float input = analogRead(A5);
  
  float temp;
  
  temp = input /1024;
  
  temp = temp * 5;
  
  temp = temp - 0.5;
  
  temp = temp * 100;
  
  
  if (temp>20 ){
    digitalWrite(3, HIGH);
   delay(500);
  
  }
  else{
    digitalWrite(3, LOW);
  }
 
  if (temp<10){
    digitalWrite(2, HIGH);
  
  }
  else{
    digitalWrite(2, LOW);
    delay(500);
  }
     
  
  
  Serial.print("volts: ");Serial.println(input);
   
  Serial.print("temp :");Serial.println(temp);
  
  
  delay(5000);
}
