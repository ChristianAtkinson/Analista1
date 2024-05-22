#include <iostream>
#include <vector>
#include <algorithm>

// Función para convertir un número decimal a binario
std::vector<int> decimalToBinary(int num) {
    std::vector<int> binary;
    while (num > 0) {
        binary.push_back(num % 2);
        num /= 2;
    }
    std::reverse(binary.begin(), binary.end());
    return binary;
}

// Función para convertir un número binario a decimal
int binaryToDecimal(std::vector<int> binary) {
    int decimal = 0;
    int exp = 1;
    for (int i = binary.size() - 1; i >= 0; --i) {
        decimal += binary[i] * exp;
        exp *= 2;
    }
    return decimal;
}

// Función para sumar dos números binarios
std::vector<int> addBinary(std::vector<int> bin1, std::vector<int> bin2) {
    std::vector<int> result;
    int carry = 0;
    int i = bin1.size() - 1;
    int j = bin2.size() - 1;
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0)
            sum += bin1[i--];
        if (j >= 0)
            sum += bin2[j--];
        result.push_back(sum % 2);
        carry = sum / 2;
    }
    std::reverse(result.begin(), result.end());
    return result;
}

// Función para restar dos números binarios
std::vector<int> subtractBinary(std::vector<int> bin1, std::vector<int> bin2) {
    std::vector<int> result;
    int borrow = 0;
    int i = bin1.size() - 1;
    int j = bin2.size() - 1;
    while (i >= 0 || j >= 0) {
        int digit1 = (i >= 0) ? bin1[i] : 0;
        int digit2 = (j >= 0) ? bin2[j] : 0;
        int diff = digit1 - digit2 - borrow;
        if (diff < 0) {
            diff += 2;
            borrow = 1;
        } else {
            borrow = 0;
        }
        result.insert(result.begin(), diff);
        i--;
        j--;
    }
    // Eliminar los ceros no significativos en la parte alta del resultado
    while (result.size() > 1 && result[0] == 0) {
        result.erase(result.begin());
    }
    return result;
}

}

int main() {
    int num1, num2;
    std::cout << "Ingrese el primer número decimal: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo número decimal: ";
    std::cin >> num2;

    // Convertir los números decimales a binarios
    std::vector<int> bin1 = decimalToBinary(num1);
    std::vector<int> bin2 = decimalToBinary(num2);

    std::cout << "El primer número en binario es: ";
    for (int digit : bin1) {
        std::cout << digit;
    }
    std::cout << std::endl;

    std::cout << "El segundo número en binario es: ";
    for (int digit : bin2) {
        std::cout << digit;
    }
    std::cout << std::endl;

    char operation;
    std::cout << "Ingrese la operación a realizar (+ para suma, - para resta): ";
    std::cin >> operation;

    std::vector<int> result;
    if (operation == '+') {
        result = addBinary(bin1, bin2);
    } else if (operation == '-') {
        result = subtractBinary(bin1, bin2);
    } else {
        std::cout << "Operación no válida." << std::endl;
        return 1;
    }

    std::cout << "El resultado en binario es: ";
    for (int digit : result) {
        std::cout << digit;
    }
    std::cout << std::endl;

    // Convertir el resultado binario a decimal y mostrarlo
    int decimalResult = binaryToDecimal(result);
    std::cout << "El resultado en decimal es: " << decimalResult << std::endl;

    return 0;
}
