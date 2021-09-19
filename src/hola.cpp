#include <Arduino.h>
#include <Espini.h>
#include "config.h"
#include "ver.h"

const char app[]="demo";

void setup() { 
  Espini cosa(wifis(),app,ver,otasrv,logsrv);
  cosa.log("hola");
  delay(300e3);
  ESP.reset();
}

void loop() {
  Serial1.println("HOLA");
}
