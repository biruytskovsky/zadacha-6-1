#include <iostream>
#include <vector>
#include <algorithm>

// Функция для вычисления суммы цифр числа
int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    // Исходная последовательность чисел
    std::vector<int> sequence = { 53, 72, 19, 87, 45 };

    // Фильтрация последовательности
    std::vector<int> filteredSequence;
    for (int number : sequence) {
        if (sumOfDigits(number) == 19) {
            filteredSequence.push_back(number);
        }
    }

    // Если подходящих чисел не найдено, сортируем последовательность по невозрастанию
    if (filteredSequence.empty()) {
        std::sort(sequence.begin(), sequence.end(), std::greater<int>());
    }

    // Вывод отфильтрованной последовательности или отсортированной исходной последовательности
    for (int number : (filteredSequence.empty() ? sequence : filteredSequence)) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    return 0;
}