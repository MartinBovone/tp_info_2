# Trabajo practico de Informatica 2

- ## Sistema a modelar: Control de movimiento de aspiradora.

- ## Memoria descriptiva:
### El sistema funciona con un sencillo control movimiento, con la función f_avanzar, reconociendo obstaculos con un sensor de proximidad, corrigiendo (siempre con rotaciones de 30º a la derecha) con la función f_corregir. Un sensor controla la batería disponible y llama a la función f_carga (que comienza el recorrido hacia la plataforma de carga estblecido con el archivo de configuración) cuando ésta baja por debajo del 15%. Finalmente cuando se recorre todo el mapa cargado la función f_avanzar llama a la función f_recall para volver a la plataforma de carga y apagar el sistema.

