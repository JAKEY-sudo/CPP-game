#include "game.h"
#include <iostream>
#include <random>
#include <ctime>

int generateNumber(int min, int max) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);
    return dis(gen);
}

void playGame() {
    char choice; // Переменная для выбора пользователя
    do {
        int secretNumber = generateNumber(1, 100);
        int guess;
        int attempts = 0;

        std::cout << "Добро пожаловать в игру 'Угадай число'!\n";
        std::cout << "Я загадал число от 1 до 100. Попробуй угадать!\n";

        // Основной цикл угадывания
        do {
            std::cout << "Введи своё число: ";
            std::cin >> guess;
            attempts++;

            if (guess > secretNumber) {
                std::cout << "Слишком большое число.\n";
            } else if (guess < secretNumber) {
                std::cout << "Слишком маленькое число.\n";
            } else {
                std::cout << "Поздравляю! Ты угадал число " << secretNumber 
                          << " за " << attempts << " попыток!\n";
            }
        } while (guess != secretNumber);

        // Запрос на выход или продолжение
        std::cout << "Нажми 'x' чтобы выйти, или любую другую клавишу чтобы сыграть ещё раз: ";
        std::cin >> choice;

    } while (choice != 'x' && choice != 'X'); // Игра продолжается, пока не нажата 'x' или 'X'
}
