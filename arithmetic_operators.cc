/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023

  *
  * @file integer_division_and_reminder.cc
  * @author Chris Kwasi Biney yeboah alu010148637@_ull.edu.es
  * @date Oct 29 2022
  * @brief este programa  muestra los resultados de los diferentes operadores que hemos dado en este curso
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */

#include <iostream>

int main() {
  int primer_operando {8};
  int segudo_operando {4};
  std::cout << primer_operando << " + " << segudo_operando << " = " << primer_operando + segudo_operando << std::endl;
  std::cout << primer_operando << " - " << segudo_operando << " = " << primer_operando - segudo_operando << std::endl;
  std::cout << primer_operando << " / " << segudo_operando << " = " << primer_operando / segudo_operando << std::endl;
  std::cout << primer_operando << " * " << segudo_operando << " = " << primer_operando * segudo_operando << std::endl;
  std::cout << primer_operando << " % " << segudo_operando << " = " << primer_operando % segudo_operando << std::endl;
  bool comparacion_de_numeros {primer_operando > segudo_operando};
  std::cout << primer_operando << " > " << segudo_operando << " = " << comparacion_de_numeros << std::endl;
  comparacion_de_numeros = primer_operando < segudo_operando;
  std::cout << primer_operando << " < " << segudo_operando << " = " << comparacion_de_numeros << std::endl;
  comparacion_de_numeros = primer_operando >=  segudo_operando;
  std::cout << primer_operando << " >= " << segudo_operando << " = " << comparacion_de_numeros << std::endl;
  comparacion_de_numeros = primer_operando <= segudo_operando;
  std::cout << primer_operando << " <= " << segudo_operando << " = " << comparacion_de_numeros << std::endl;
  comparacion_de_numeros = primer_operando == segudo_operando;
  std::cout << primer_operando << " == " << segudo_operando << " = " << comparacion_de_numeros << std::endl;
  comparacion_de_numeros = primer_operando != segudo_operando;
  std::cout << primer_operando << " != " << segudo_operando << " = " << comparacion_de_numeros << std::endl;
}