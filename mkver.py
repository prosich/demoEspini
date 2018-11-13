# Genera un numero de versión (en realidad, la fecha)
# para embeber en el firmware al objeto de comparar
# en el momento de una actualización OTA.
#
# Se ejecuta como paso previo a la compilación
# (indicado en platform.ini)

import time
ver=time.strftime('%Y%m%d%H%M')

f=open("src/ver.h","w+")
f.write('char ver[]="'+ver+'";')
f.close()

f=open("src/ver.txt","w+")
f.write(ver)
f.close()
