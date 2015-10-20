Do not install ardour from here, go to original repo https://github.com/Ardour/ardour 

No installe Ardour desde aquí, vaya al repositorio original : https://github.com/Ardour/ardour

---

Este repositorio es con fines de aprendizaje y contiene comentarios en español del código de Ardour

Algunas lecturas para tener contexto:

Taller de Ardour donde se explica su arquitectura http://tu.linuxaudiosystems.com/dawd

Arquictura de aplicaciones de código abierto donde hay capítulo de Audácity http://aosabook.org/en/index.html

---
## Track Input
### Meter Input
### ARDOUR::Diskstream
https://github.com/son0p/codigo_comentado__ardour/blob/master/libs/ardour/diskstream.cc
  * Es una manera de mover datos desde y hacia el disco
  * Grandes Buffers circulares (lock-free) 
    * => leer http://www.rossbencina.com/code/lockfree?q=~rossb/code/lockfree/
    * => leer https://es.wikipedia.org/wiki/Buffer_circular
    * => leer http://www.wannabegeek.com/?p=532
### Monitoring
### Polarity
### Meter Pre
### Mute / solo
### Pre-fader redirects
### Mute / solo
### Gain
### Post-Fader redirect
### Meter Post
### Mute / Solo
### Pan
### Track Output
    




