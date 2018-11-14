
ESP8266WiFiMulti wifis() {
  ESP8266WiFiMulti wm;

  wm.addAP("RM24","xxxxx");
  wm.addAP("LGG3","password");
  wm.addAP("RMUP","xxxxx");

  return(wm);
  }

