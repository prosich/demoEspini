#include <Espini.h>
#include "wifis.h"
#include "ver.h"

void setup() { 
  Espini cosa(wifis(),"demo",ver,"ota.mi.domi.nio","syslog.mi.domi.nio");
  cosa.log(ver);
  delay(300e3);
  ESP.reset();
}

void loop() {
}
