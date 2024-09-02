char x;
#define in1 2
#define in2 3
#define in3 4
#define in4 5

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);

}

void loop() 
{
  // put your main code here, to run repeatedly:
  if(Serial.available()>0)
  {
    x = Serial.read();
    Serial.println(x);
  }

  if(x == 'F')
  {
    // forward
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    digitalWrite(in3,LOW);
    digitalWrite(in4,HIGH);
  }
  else if (x == 'B')
  {
    // back
    digitalWrite(in2,HIGH);
    digitalWrite(in1,LOW);
    digitalWrite(in4,LOW);
    digitalWrite(in3,HIGH);

  }
  else if (x == 'R')
  {
    // right
    digitalWrite(in2,HIGH);
    digitalWrite(in1,LOW);
    digitalWrite(in3,LOW);
    digitalWrite(in4,HIGH);

  }
  else if (x == 'L')
  {
    // left
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    digitalWrite(in4,LOW);
    digitalWrite(in3,HIGH);

  }
  else if (x == 'S')
  {
    // stop
    digitalWrite(in1,HIGH);
    digitalWrite(in2,HIGH);
    digitalWrite(in3,HIGH);
    digitalWrite(in4,HIGH);

  }


}
