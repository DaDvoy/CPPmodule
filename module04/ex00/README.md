*Polymorphism*

Виртуальная функция в языке С++ — это особый тип функции, которая, при её вызове, выполняет «наиболее» дочерний метод,
который существует между родительским и дочерними классами. Это свойство еще известно, как полиморфизм.
Дочерний метод вызывается тогда, когда совпадает сигнатура (имя, типы параметров и является ли метод константным)
и тип возврата дочернего метода с сигнатурой и типом возврата метода родительского класса.
Такие методы называются переопределениями (или «переопределенными методами»).

Чтобы сделать функцию виртуальной, нужно просто указать ключевое слово virtual перед объявлением функции.
(Сигнатура виртуального метода дочернего класса должна полностью соответствовать сигнатуре виртуального метода родительского класса.
Если у дочернего метода будет другой тип параметров, нежели у родительского, то вызываться этот метод не будет.)

Если функция отмечена как виртуальная, то все соответствующие переопределения тоже считаются виртуальными,
даже если возле них явно не указано ключевое слова virtual. Однако, наличие ключевого слова virtual возле методов
дочерних классов послужит полезным напоминанием о том, что эти методы являются виртуальными, а не обычными.


**Нельзя вызывать виртуальные функции в теле конструкторов или деструкторов!**

*Минусы виртуальных методов:*

 Обработка и выполнение вызова виртуального метода занимает больше времени, чем обработка и выполнение вызова обычного метода.
 Кроме того, компилятор также должен выделять один дополнительный указатель для каждого объекта класса,
 который имеет одну или несколько виртуальных функций.
