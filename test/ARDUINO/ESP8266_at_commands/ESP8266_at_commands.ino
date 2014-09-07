/* 
 * Engineer: Bryce Feigum (bafeigum at gmail)
 * Date: August 30, 2014
 * This is a test application to verify how the
 * ESP8266 responds to different AT commands.
 * Connect ESP8266 TX and RX to Serial1 pins
 * on Arduino Mega.
 * Modify which command will be sent on first
 * run. The output will be sent to PC one
 * byte at a time.
 */
const char AT_RESTART[] =  "AT+RST";
const char AT_MODE[] =     "AT+CWMODE";
const char AT_JOIN_AP[] =  "AT+CWJAP";
const char AT_LIST_AP[] =  "AT+CWLAP";
const char AT_QUIT_AP[] =  "AT+CWQAP";
const char AT_AP_MODE[] =  "AT+CWSAP";

void setup() {
  // initialize serial for PC COM
  Serial.begin(57600);
  // Initialize serial for ESP8266 COM
  Serial1.begin(57600);
}

void loop() {
  
  // Send command
  Serial1.println(AT_LIST_AP);
  // Send CR
  //Serial1.write(13);
  // Send LF
  //Serial1.write(10);
  
  while(1){
    // if there's any serial available, read it:
    while (Serial1.available() > 0) {
        Serial.print(Serial1.read());
    }
  }
}








