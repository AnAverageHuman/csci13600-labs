#include <iostream>

#include "main.hpp"

#define GRN(x) "\x1B[32m" x "\x1B[0m"

int main() {
  std::cout << GRN("Task A");
  std::cout << std::endl;
  std::cout << "Text: Cat :3 Dog";
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << test_ascii("Cat :3 Dog");

  std::cout << std::endl;
  std::cout << GRN("Task B");
  std::cout << std::endl;
  std::cout << "Plaintext : Hello, World!";
  std::cout << std::endl;
  std::cout << "Shift     : 10";
  std::cout << std::endl;
  std::cout << "Ciphertext: ";
  std::cout << encryptCaesar("Hello, World!", 10);
  std::cout << std::endl;

  std::cout << std::endl;
  std::cout << GRN("Task C");
  std::cout << std::endl;
  std::cout << "Plaintext : Hello, World!";
  std::cout << std::endl;
  std::cout << "Keyword   : cake";
  std::cout << std::endl;
  std::cout << "Ciphertext: ";
  std::cout << encryptVigenere("Hello, World!", "cake");
  std::cout << std::endl;

  std::cout << std::endl;
  std::cout << GRN("Task D");
  std::cout << std::endl;
  std::cout << "Plaintext : Hello, World!";
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "= Caesar =";
  std::cout << std::endl;
  std::cout << "Shift     : 10";
  std::cout << std::endl;
  std::cout << "Ciphertext: ";
  std::cout << encryptCaesar("Hello, World!", 10);
  std::cout << std::endl;
  std::cout << "Decrypted : ";
  std::cout << decryptCaesar(encryptCaesar("Hello, World!", 10), 10);
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "= Caesar =";
  std::cout << std::endl;
  std::cout << "Keyword   : cake";
  std::cout << std::endl;
  std::cout << "Ciphertext: ";
  std::cout << encryptVigenere("Hello, World!", "cake");
  std::cout << std::endl;
  std::cout << "Decrypted : ";
  std::cout << decryptVigenere(encryptVigenere("Hello, World!", "cake"), "cake");
  std::cout << std::endl;

  return 0;
}

