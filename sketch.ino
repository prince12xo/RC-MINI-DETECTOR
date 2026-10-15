#define IN1 26
#define IN2 27
#define IN3 14
#define IN4 12
#define SENSOR_PIN 34
#define BUZZER_PIN 25

void setup() {
  Serial.begin(115200);
  
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(SENSOR_PIN, INPUT);

  stopMotors();
  Serial.println("RC Mine Detector System Initialized.");
}

void loop() {
  int sensorValue = analogRead(SENSOR_PIN);
  
  // Detection threshold for metallic signature
  if (sensorValue > 2500) {
    stopMotors();
    digitalWrite(BUZZER_PIN, HIGH);
    Serial.print("ALERT: Metallic Anomaly Detected! Value: ");
    Serial.println(sensorValue);
    delay(500);
  } else {
    digitalWrite(BUZZER_PIN, LOW);
    moveForward();
  }
  
  delay(100);
}

void moveForward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void stopMotors() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}