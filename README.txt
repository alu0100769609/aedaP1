Esta práctica puede ejecutarse utilizando el fichero main.out que se encuentra
en el mismo directorio que este fichero README.txt

A parte, se puede ejecutar cada clase por separado. Éstos ficheros .out se
encuentran dentro de la carpeta /out. Para compilar de nuevo cualquier
fichero .out (incluido el main) utilizar estos:


COMPILE MAIN:
g++ cpp/TodosLosMain.cpp -o main.out

COMPILE VECTOR:
g++ cpp/MainVector.cpp cpp/Vector.cpp -o out/mainVector.out

COMPILE LINKEDLIST:
g++ cpp/MainList.cpp cpp/Node.cpp cpp/LinkedList.cpp -o out/mainList.out

COMPILE STACK:
g++ cpp/MainStack.cpp cpp/Node.cpp cpp/Stack.cpp -o out/mainStack.out

COMPILE QUEUE:
g++ cpp/MainQueue.cpp cpp/Node.cpp cpp/Queue.cpp -o out/mainQueue.out
