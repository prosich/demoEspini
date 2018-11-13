#include <Espini.h>
#include "wifis.h"
#include "app.h"
#include "ver.h"

void setup() { 
  Espini cosa(wifis(),app,ver,"ota.rosich.es","syslog.rosich.es");
  cosa.log(ver);
  delay(300e3);
  ESP.reset();
}

void loop() {
}
