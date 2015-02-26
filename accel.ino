const int XPin = A0;
const int YPin = A1;
const int ZPin = A2;

void setup() {
  Serial.begin(9600);
  Serial.println("AXRaw, AYRAW, AZRAW");
}

void loop() {
  word AXRaw;
  word AYRaw;
  word AZRaw;

  AXRaw = analogRead(XPin);    
  AYRaw = analogRead(YPin);
  AZRaw = analogRead(ZPin);
  
  Serial.print(AXRaw);
  Serial.print(", ");
  Serial.print(AYRaw);
  Serial.print(", ");
  Serial.println(AZRaw);
  
//
// student code below
//
// AXvolts = ...
// AXmss = ...
// AXGs = ...
//
// Now print AXvolts, AXmss, AXGs
//
   delay(100);
}
