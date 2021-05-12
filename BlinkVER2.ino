void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  
}

void delayLoop(){
  delay(200);
}
/* Dette er værdierne der bestmmer hvor mange gange blinkene loopes. Nummeret af Y bestemmer gangene det loopes. */
int x = 0;
int y = 3;

/* Får den der port 11 til at tænde og slukke med et delay fra tidligere funktion */
void LED11() {
  while (x<y){
  digitalWrite(11, HIGH);
  delayLoop();
  digitalWrite(11, LOW);
  delayLoop();
  x++;
  }
  x=0;
 }

/* Får den der port 12 til at tænde og slukke med et delay fra tidligere funktion */
void LED12() {
  while (x<y){
  digitalWrite(12, HIGH);
  delayLoop();
  digitalWrite(12, LOW);
  delayLoop();
  x++;
  }
  x=0;
 }

/* Får den der port 13 til at tænde og slukke, kaldes også LED_BUILTIN, da port 13 også kan kaldes det. Delayet er bestemt i tidligere funktion */
void LED13(){
  while (x<y){
  digitalWrite(LED_BUILTIN, HIGH);
  delayLoop();
  digitalWrite(LED_BUILTIN, LOW);
  delayLoop();
  x++;
  }
  x=0;
 }

void loop() {
  LED11();
  LED12();
  LED13();
}
