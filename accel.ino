const int XPin = A0;
const int YPin = A1;
const int ZPin = A2;

void setup() {
  Serial.begin(9600);
  Serial.println("AXRaw, AYRAW, AZRAW");
}

void loop() {
  float AXRaw;
  float AYRaw;
  float AZRaw;

  AXRaw = analogRead(XPin);    
  AYRaw = analogRead(YPin);
  AZRaw = analogRead(ZPin);
  
   AXRaw = AXRaw-324.0;    
   AYRaw = AYRaw-324.0;
   AZRaw = AZRaw-327.0;
   
   AXRaw = AXRaw/12*32;
   AYRaw = AYRaw/12*32;  
   AZRaw = AZRaw/12*32;  
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
