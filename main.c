#include<SoftwareSerial.h>
SoftwareSerial sb(2,3);//rx,tx

const int led1=4;
const int led2=5;
const int led3=6;

String data=" ";

bool a=true,b=true,c=true;

void setup()
{
  
  delayMicroseconds(2000);
  Serial.begin(9600);
  sb.begin(9600);
  
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  
  Serial.println("ready");
  
}
void loop()
{
  if(sb.available()>0)
  {
    data=sb.readString();
    delayMicroseconds(500);
  }
   
    if((data=="light on" || data=="Light ON" || data=="Light On") && a==true)
    {
      a=false;
      sb.println("Light is turned ON");
      digitalWrite(led1,HIGH);
    }
    if((data=="light off" || data=="Light OFF" || data=="Light Off") && a==false)
    {
      a=true;
      sb.println("Light is turned OFF");
      digitalWrite(led1,LOW);
    }

    if((data=="fan on" || data=="fan ON" || data=="fan On") && b==true)
    {
      b=false;
      sb.println("Fan is turned ON");
      digitalWrite(led2,HIGH);
    }

    if((data=="fan off" || data=="Fan OFF" || data=="Fan Off") && b==false)
    {
      b=true;
      sb.println("Fan is turned OFF");
      digitalWrite(led2,LOW);
    }

    if((data=="tv on" || data=="TV ON" || data=="TV On") && c==true)
    {
      c=false;
      sb.println("TV is turned ON");
      digitalWrite(led3,HIGH);
    }

    if((data=="tv off" || data=="TV OFF" || data=="TV Off") && c==false)
    {
      c=true;
      sb.println("TV is turned OFF");
      digitalWrite(led3,LOW);
    }

    if((data=="all on" || data=="All ON" || data=="All On") && d==true)
    {
      d=false;
      sb.println("All devices are turned ON");
      digitalWrite(led1,HIGH);digitalWrite(led2,HIGH);digitalWrite(led3,HIGH);
    }
    
    if((data=="all off" || data=="All OFF" || data=="All Off") && d==false)
    {
      d=true;
      sb.println("All devices are turned OFF");
      digitalWrite(led1,LOW);digitalWrite(led2,LOW);digitalWrite(led3,LOW);
    }



}