#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    
    const size_t n2 = 10;
    int arr[n2];
    
    for (size_t i = 0; i < n2; ++i) {
        cin >> arr[i];
    }
    // 10 5 14 17 18 12 -10 1 -45 13
    
    bool isUnordered = false;
    size_t i = 0;
    
    while (i < n2 - 1) {
        if (arr[i] > arr[i + 1]) {
            isUnordered = true; 
            break;
        }
        i++;
    }

    if (!isUnordered) {
        cout << "Массив упорядочен по возрастанию.\n";
    } else {
        cout << "Массив не упорядочен по возрастанию.\n";
    }
    // Массив не упорядочен по возрастанию.
    return 0;
}
