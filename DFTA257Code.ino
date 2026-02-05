// -------------------------------
// Pilotage tore 3 bobinages
// SYNC / SET / RESET
// -------------------------------

const uint8_t PIN_SYNC  = 2;
const uint8_t PIN_SET   = 3;
const uint8_t PIN_RESET = 4;

void setup() {
  pinMode(PIN_SYNC, OUTPUT);
  pinMode(PIN_SET, OUTPUT);
  pinMode(PIN_RESET, OUTPUT);

  digitalWrite(PIN_SYNC, LOW);
  digitalWrite(PIN_SET, LOW);
  digitalWrite(PIN_RESET, LOW);
}

void loop() {

  // --- Début fenêtre de synchro ---
  digitalWrite(PIN_SYNC, HIGH);

  
  delayMicroseconds(50);   // 1 ms
  digitalWrite(PIN_SET, HIGH);
  delayMicroseconds(10);
  digitalWrite(PIN_SET, LOW);

  
  delayMicroseconds(100);
  digitalWrite(PIN_RESET, HIGH);
  delayMicroseconds(10);
  digitalWrite(PIN_RESET, LOW);

  delayMicroseconds(10);
  digitalWrite(PIN_SYNC, LOW);

}
