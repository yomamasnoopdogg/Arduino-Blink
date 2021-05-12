void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void delayLoop(){
  delay(500);
}

/* Får den der port 11 til at tænde og slukke med et delay fra tidligere funktion */
void LED11() {
  digitalWrite(11, HIGH);
  delayLoop();
  digitalWrite(11, LOW);
  delayLoop();
}

/* Får den der port 12 til at tænde og slukke med et delay fra tidligere funktion */
void LED12() {
  digitalWrite(12, HIGH);
  delayLoop();
  digitalWrite(12, LOW);
  delayLoop();
 }

/* Får den der port 13 til at tænde og slukke, kaldes også LED_BUILTIN, da port 13 også kan kaldes det. Delayet er bestemt i tidligere funktion */
void LED13(){
  digitalWrite(LED_BUILTIN, HIGH);
  delayLoop();
  digitalWrite(LED_BUILTIN, LOW);
  delayLoop();
}

void loop() {
  LED11();
  LED12();
  LED13();
}
