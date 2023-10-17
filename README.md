##  70-prvend

  Informatica Electronica 
  Austral - 2023 - EAM

### ESP32 driving an slot of a vending machine

  Si se oprime el pulsador denominado GO, entonce se arranca el motor
  Como, al arrancar, se supone que el microswitch MICRO esta actuado, se
  espera del orden de 500 mseg (a lo sumo media rotacion del motori ya que se supone que el motor gira a 60 rpm) a que el micrositch se haya desactuado.

  El motor se detendrá cuando el microswitch MICRO se actúe porque de esa manera el motor habrá dado una rotación completa

  Se imprime la cabtidad de milisegundos que le llevo al motor dar una revolucion

  El ciclo se repite, si es que el pulsador GO no esta actuado


  For more information, see doc/README.md


