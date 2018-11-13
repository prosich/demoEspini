import time

ver=time.strftime('%Y%m%d%H%M')

f=open("src/ver.h","w+")
f.write('char ver[]="'+ver+'";\n')
f.close()

f=open("src/ver.txt","w+")
f.write(ver)
f.close()
