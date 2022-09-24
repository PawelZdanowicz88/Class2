
#include <iostream>
#include <string>

class Counter {
private:
    int value;
public:
    Counter(int v1):
        value(v1)
    {
    }
    Counter() :
        value(1)
    {
    }
    void increase() {
        value = value + 1;
    }
    void decrease() {
        value = value - 1;
    }
    int present() {
        return value;
    }
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    int v1 = 0;
    std::string answer;
    
    do {
        std::cout << "Вы хотите указать начальное значение счётчика? Введите 'да' или 'нет': ";
        std::cin >> answer;
        if (answer == "да") {
            std::cout << "Введите начальное значение счётчика: ";
            std::cin >> v1;
            
            break;
        }
        if (answer == "нет") {
            std::cout << "Начальное значение счетчика задается по умолчанию" << std::endl;
            
            break;
        }
        std::cout << "Ошибка в ответе, попробуйте еще раз" << std::endl;
    } while (1);
    
    Counter electronics = ((v1 != 0)?(Counter (v1)):(Counter ()));
    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> answer;
        if (answer == "+") {
            electronics.increase();
        }
        else if (answer == "-") {
            electronics.decrease();
        }
        else if (answer == "=") {
            std::cout << electronics.present() << std::endl;
        } 
        else if (answer == "х") {
            std::cout << "До свидания!" << std::endl;
        }
        else {
            std::cout << "Разрешено вводить только определенные команды" << std::endl;
        }
    } while (!(answer == "х")); // в данном случае я использую русскую букву "х"
    return 0;
};
