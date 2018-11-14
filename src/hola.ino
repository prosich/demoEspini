#include <Espini.h>
#include "wifis.h"
#include "ver.h"

void setup() { 
  Espini cosa(wifis(),"demo",ver,"ota.rosich.es","syslog.rosich.es");
  cosa.log("hola");
  delay(300e3);
  ESP.reset();
}

void loop() {
}
