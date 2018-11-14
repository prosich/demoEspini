#include <Espini.h>
#include "config.h"
#include "ver.h"

void setup() { 
  Espini cosa(wifis(),"demo",ver,otasrv,logsrv);
  cosa.log("hola");
  delay(300e3);
  ESP.reset();
}

void loop() {
}
