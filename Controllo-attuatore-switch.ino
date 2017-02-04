//**********************************************************************
//          WELCOME THANK YOU FOR DOWNLOAD THE CODE                    *
//          MADE BY MATTIA ESPOSITO                                    *
//          https://github.com/MttEsposito                             *
//          https://www.youtube.com/channel/UCPTNOyJNd_I3DN77ojzRrug   *
//          HAVE A NICE CODING                                         *
//**********************************************************************

void setup() {  
  pinMode(12,OUTPUT); //Channel A Direction Pin Initialize
  pinMode(6,INPUT); //Input switch1 HIGH
  pinMode(7,INPUT); //Input switch2 LOW
  pinMode(5,OUTPUT);  //LED output 1
  pinMode(4,OUTPUT);  //LED output 2
}

void loop() {
    

  // if the switch is high, motor will turn on one direction:
  if (digitalRead(7) == HIGH)
  {
    digitalWrite(12, HIGH); //Channel A Direction Forward
    analogWrite(3,255); //motor run full speed
    digitalWrite(5,HIGH); //turn led1 on
  }
  
  // if the switch is low, motor will turn in the other direction:
  else if(digitalRead(6) == HIGH)
  {
    digitalWrite(12, LOW); //Channel A Direction Reverse
    analogWrite(3,255); //motor run full speed
    digitalWrite(4,HIGH);//turn led2 on
  }
  else
  //third position switch set all OFF
  analogWrite(3,0); //motor speed off 
  digitalWrite(5,LOW);//turn led1 off 
  digitalWrite(4,LOW);//turn led2 off
  
}
  
