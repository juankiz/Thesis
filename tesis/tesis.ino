int temp_sensor_pin = 5;
int foto_sensor_pin = 4;
int prox_sensor_pin = 3;

float temp;
int foto;
int prox;

void setup() {
  Serial.begin(9600); 
  Serial.println("Empieza");
}

void loop() {
  temp = analogRead(temp_sensor_pin);
  temp = (5.0 * temp * 100.0)/1024;
  
  foto = analogRead(foto_sensor_pin);
  
  Serial.print("Temp: ");  
  Serial.println(temp);
  
  Serial.print("Foto: ");
  Serial.println(foto);
  
  
  delay(1000);
}
