#include "coeur.h"
#include "param.h"
#include <arduino.h>

int LED1 = 1;
int LED2 = 2;
int LED3 = 3;
int LED4 = 4;
int LED5 = 5;
int LED6 = 6;
int LED7 = 7;
int LED8 = 8;
int LED9 = 9;
int LED10 = 10;



void setup() 
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(LED9, OUTPUT);
  pinMode(LED10, OUTPUT);
}


void loop() 
{
  int bat;
  int compteur;
  int i;
  int n;
  
  if(parametrage = 1)
  {
    battement_coeur( bat,  compteur,  i);
  }
  else if(parametrage = 2)
  {
    lumiere( bat,  compteur,  i,  n);
  }
  else if(parametrage = 3)
  {
    chenille( bat,  compteur,  i);
  }
  else
  {
    exit(0);
  }
}
 int battement_coeur (int bat, int compteur, int i)
    {  
    compteur = 0;

    if(bat>0)
    { 
      while(compteur != bat)
      {
        for(i=1; i<bat; i++)
        {
          digitalWrite (1, HIGH) ;
          delay (60000/bat) ;
          digitalWrite (2, HIGH) ;
          delay (60000/bat) ;
          digitalWrite (3, HIGH) ;
          delay (60000/bat) ;
          digitalWrite (4, HIGH) ;
          delay (60000/bat) ;
          digitalWrite (5, HIGH) ;
          delay (60000/bat) ;
          digitalWrite (6, HIGH) ;
          delay (60000/bat) ;
          digitalWrite (7, HIGH) ;
          delay (60000/bat) ;
          digitalWrite (8, HIGH) ;
          delay (60000/bat) ;
          digitalWrite (9, HIGH) ;
          delay (60000/bat) ;
          digitalWrite (10, HIGH) ;
          delay (60000/bat) ;
          compteur = compteur + 1;

            if(compteur = bat)
            {
              i = 11;
            }
        }
      }
    }
 
    }  
  int lumiere (int bat, int compteur, int i, int n)
  {
    compteur = 0;

    if(bat>0)
    {
      while(compteur != bat)
      {
        for(n=2; n<10; n++)
        {
          for(i=1; i<11; i=i+n)
          {
            digitalWrite(i, HIGH);
            compteur = compteur + 1;

            if(compteur = bat)
              {
                i = 11;
              }
          } 
            delay(60000/bat);
            digitalWrite(1, LOW);
            digitalWrite(2, LOW);
            digitalWrite(3, LOW);
            digitalWrite(4, LOW);
            digitalWrite(5, LOW);
            digitalWrite(6, LOW);
            digitalWrite(7, LOW);
            digitalWrite(8, LOW);
            digitalWrite(9, LOW);
            digitalWrite(10, LOW);
            if(compteur = bat)
            {
              i = 11;
            }
        }
            n = 10;
            digitalWrite(1, HIGH);
      }
    }
  
  }

  int chenille (int bat, int compteur, int i)
  {
    if(bat>0)
    {
      while(compteur != bat)
      {
        for(i=1; i<11; i++)
        {
          digitalWrite(i, HIGH);
          delay(60000/bat);
          digitalWrite(i,LOW);
          compteur = compteur + 1;

          if(compteur = bat)
          {
            i = 11;
          }
        }
      }
    }
   
  }
