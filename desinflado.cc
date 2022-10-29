/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file integer_division_and_reminder.cc
  * @author Chris Kwasi Biney yeboah alu010148637@_ull.edu.es
  * @date Oct 29 2022
  * @brief este programa cambia las letras de mayusculas a minusculas y viceversa
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */

#include <iostream>

int main() {
  char letra_introducida;
  std::cin >> letra_introducida;
  int cambio_de_letra_a_un_numero {static_cast<int>(letra_introducida)};
  if (cambio_de_letra_a_un_numero >= 65 && cambio_de_letra_a_un_numero <= 95) {
    int convertido_de_minisculas {cambio_de_letra_a_un_numero + 32};
    letra_introducida = static_cast<char>(convertido_de_minisculas); 
  } else {
      int convertido_de_mayusculas {cambio_de_letra_a_un_numero - 32};
      letra_introducida = static_cast<char>(convertido_de_mayusculas);
  }
  std::cout << letra_introducida << "\n";
}
