#include <iostream>
#include <list>

class StackQueueList {
private:
    std::list<int> data;

public:
	
    void insert(int value) {
        data.push_back(value);
    }

    void removeFromFront() {
        if (!data.empty()) {
            data.pop_front();
        }
    }

    void removeFromBack() {
        if (!data.empty()) {
            data.pop_back();
        }
    }

    void display() {
        for (const int& value : data) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }

    bool isEmpty() {
        return data.empty();
    }
};

int main() {
    StackQueueList list;

    int choice;

    do {
        std::cout << "1. Insertar número" << std::endl;
        std::cout << "2. Eliminar del principio (del primero al último)" << std::endl;
        std::cout << "3. Eliminar del final (de abajo hacia arriba)" << std::endl;
        std::cout << "0. Salir" << std::endl;
        std::cout << "Elija una opción: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                int number;
                std::cout << "Ingrese un número: ";
                std::cin >> number;
                list.insert(number);
                break;
            case 2:
                list.removeFromFront();
                break;
            case 3:
                list.removeFromBack();
                break;
            case 0:
                std::cout << "Saliendo..." << std::endl;
                break;
            default:
                std::cout << "Opción no válida." << std::endl;
        }
        
        std::cout << "Contenido de la lista: ";
        list.display();
    } while (choice != 0);

    return 0;
}














