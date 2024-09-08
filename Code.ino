
// NeuralMesh Solution



#define Sensor 8
#define Buzzer 3 
#define Blue 4
#define Yellow 5

void setup() {
  Serial.begin(9600);
  pinMode(Sensor, INPUT);
  pinMode(Buzzer, OUTPUT);
  pinMode(Blue, OUTPUT);
  pinMode(Yellow, OUTPUT);
}

void loop() {
  bool value = digitalRead(Sensor);
  Serial.println(value);

  if (value == 0) {
    digitalWrite(Buzzer, HIGH);
    digitalWrite(Blue, HIGH);
    digitalWrite(Yellow, LOW);
  } else if (value == 1) {
    digitalWrite(Buzzer, LOW);
    digitalWrite(Blue, LOW);
    digitalWrite(Yellow, HIGH);
  }
}