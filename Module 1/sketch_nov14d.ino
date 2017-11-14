unsigned long time;
int bat = 0;


void setup() {

  Serial.begin(9600);

  Serial.println("Veuillez patienter");

  time = millis();

  // un petit réchauffement du convertisseur
  // analogique-numérique semble améliorer les résultats
  while((millis()-time)<1000){
    analogRead(0);
  }

  time = millis();

  // on affiche au moniteur série pendant 5 secondes
  while((millis()-time)< 5000){
    Serial.println(analogRead(0));
    if (analogRead(0) > 825){
      if (analogRead(0) < 825){
        bat = bat + 1;
      }
    }
  }
  
  bat = bat * 12;
  Serial.println(bat);
}


void loop() {


}

