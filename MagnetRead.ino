/* ArduSensor Magnet Read

Reads the ArduSensor Magnet, and prints if it is high or not on the Serial
monitor

Qtechknow kits required:
  ArduSensor Magnet

made on 12 July 12
created by Quin
 */

int ArduSensorValue;   // variable to store the value of the ArduSensor Magnet

void setup() {
  Serial.begin(9600);  // start Serial communication at 9600 baud
}

void loop() {
  // assign the variable to the value of the ArduSensor Magnet
  ArduSensorValue=analogRead(0); 
  
  if(ArduSensorValue == 1023) {
    Serial.println("Magnet Close!");  // print "Magnet Close!"
  }    // if the value was high
  if(ArduSensorValue == 0) {
    Serial.println("Where's the Magnet?");  // print "Where's the Magnet"
  }  // if the value was low
  delay(100);
}
