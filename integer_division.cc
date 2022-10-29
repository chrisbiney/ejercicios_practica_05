/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023

  *
  * @file integer_division_and_reminder.cc
  * @author Chris Kwasi Biney yeboah alu010148637@_ull.edu.es
  * @date Oct 29 2022
  * @brief este programa realiza la division entera de dos numeros;
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */

#include <iostream>
#include <cassert>

int main() {
  int primer_operando {0};
  int segudo_operando {0};
  std::cin >> primer_operando >> segudo_operando;
  assert(segudo_operando > 0);
  std::cout << primer_operando / segudo_operando << " " << primer_operando % segudo_operando << std::endl;
}
