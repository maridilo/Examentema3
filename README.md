# Examentema3
https://github.com/maridilo/Examentema3.git

Parte 1: Preguntas de elección múltiple (20%)

1) ¿Cuál es el propósito principal de la clase Variant en el lenguaje Tiny Lisp?
Respuesta:
b)Representar cualquier tipo de dato Lisp.

3) ¿Qué representación se obtiene al utilizar el método to_string() en un objeto Variant?
Respuesta:
a) Una cadena de texto que representa una instancia de Variant.

5) ¿Qué función cumple el método to_json_string() en la clase Variant?
Respuesta:
b) Convierte un objeto Variant a una cadena JSON.

7) ¿Qué función cumple el método from_json_string() en la clase Variant?
Respuesta:
a) Convierte una cadena JSON en un objeto Variant

Parte 2: Pregunta de desarrollo de código (80%):Sistema de Scripting para Motor de Videojuegos Indie

Introducción:

Con el auge de la industria de los videojuegos, los motores de videojuegos independientes están en constante evolución y buscan herramientas que les permitan ser más flexibles y personalizables. Uno de los elementos clave en este sentido es la posibilidad de tener un sistema de scripting que permita a los diseñadores y desarrolladores modificar el comportamiento del juego sin tener que recompilar todo el código fuente.

En este escenario, la clase Variant ya proporciona una representación genérica de datos en el motor, capaz de almacenar diferentes tipos de valores. Ahora, para avanzar en la implementación del sistema de scripting, necesitas implementar una clase Environment que funcione como un contexto de ejecución para scripts, permitiendo asociar nombres de variables con sus respectivos valores.
