// Copyright (c) 2021 Abdul Basit All rights reserved.
//
// Created by: Abdul Basit
// Created on: Nov 2021
// this program is the number guessing game

#include <iostream>

int main() {
  // this function is the number guessing game
  int guess;
  std::cout << "Enter a number between 0-9: ";
  std::cin >> guess;
 
  if (guess == 4) {
    std::cout << "You guessed right !" << std::endl;
    std::cout << "" << std::endl;
  }
  if (guess !=4) {
    std::cout << "You guessed Wrong !" << std::endl;
    std::cout << "" << std::endl; 
  }
  std::cout << "Done." << std::endl;
}
