// Replace sensor numbers with Names

#define START_CMD_CHAR '>'

String inText;
float roll , pitch , yaw;

void setup() {
  Serial.begin(9600);
  Serial.flush();
}

void loop()
{
  Serial.flush();
  int inCommand = 0;
  int sensorType = 0;
  unsigned long logCount = 0L;

  char getChar = ' ';  //read serial

  // wait for incoming data
  if (Serial.available() < 1) return; // if serial empty, return to loop().

  // parse incoming command start flag 
  getChar = Serial.read();
  if (getChar != START_CMD_CHAR) return; // if no command start flag, return to loop().

  // parse incoming pin# and value  
  sensorType = Serial.parseInt(); // read sensor typr
  logCount = Serial.parseInt();  // read total logged sensor readings
  roll = Serial.parseFloat();  // 1st sensor value
  pitch = Serial.parseFloat();  // 2rd sensor value if exists
  yaw = Serial.parseFloat();  // 3rd sensor value if exists

  Serial.print("Sensor type: ");
  Serial.println(sensorType);
  Serial.print("Sensor log#: ");
  Serial.println(logCount);
  Serial.print("roll : ");
  Serial.println(roll);
  Serial.print("pitch : ");
  Serial.println(pitch);
  Serial.print("yaw : ");
  Serial.println(yaw);
  Serial.println("-----------------------");

}



