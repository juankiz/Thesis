const int temp_sensor_pin = 5;
const int foto_sensor_pin = 4;
const int prox_sensor_pin = 3;

float temp;
int foto;
int prox;
boolean flagT = false;
boolean flagF = false;
boolean flagP = false;

int interval = 1000;
unsigned long previousMillis;

void imprimeVariables(){
  Serial.print("Temp: ");  
  Serial.print(temp);
  Serial.print("\nFoto: ");
  Serial.println(foto);
}

void verificaTemp(){
    if(temp > 26 && flagT==false){
    flagT = true;
    //enciendeAire();
  }
  if(temp < 20){
    flagT = false;
    //apagaAire();
  }
}

void setup() {
  Serial.begin(9600); 
  Serial.println("Empieza");
}

void loop() {
  //Acquire readings
  temp = analogRead(temp_sensor_pin);
  temp = (5.0 * temp * 100.0)/1024;
  foto = analogRead(foto_sensor_pin);
  prox = analogRead(prox_sensor_pin);
  
  //Evaluate readings
  
  
  //Print values every second
  unsigned long currentMillis = millis();
  if(currentMillis - previousMillis > interval){
    previousMillis = currentMillis;
    
    imprimeVariables();
  }
  
}
