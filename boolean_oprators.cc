/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file integer_division_and_reminder.cc
  * @author Chris Kwasi Biney yeboah alu010148637@_ull.edu.es
  * @date Oct 29 2022
  * @brief este programa muestra la tabla de verdad de los operadores logicos (and, or, not)
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */

#include <iostream>

int main() {
  std::cout << "Tabla lógica AND" << std::endl;
  std::cout << "-----------------" << std::endl;
  bool veradero {1}, falso {0};
  std::cout << "A     B   salida" << std::endl;
  std::cout << falso << "     " << falso << "      " << falso * falso << std::endl;
  std::cout << falso << "     " << veradero << "      " << veradero * falso << std::endl;
  std::cout << veradero << "     " << falso << "      " << veradero * falso << std::endl;
  std::cout << veradero << "     " << veradero << "      " << veradero * veradero << std::endl;
  std::cout << "Tabla lógica OR" << std::endl;
  std::cout << "-----------------" << std::endl;
  std::cout << "A     B   salida" << std::endl;
  std::cout << falso << "     " << falso << "      " << falso + falso << std::endl;
  std::cout << falso << "     " << veradero << "      " << veradero + falso << std::endl;
  std::cout << veradero << "     " << falso << "      " << veradero + falso << std::endl;
  std::cout << veradero << "     " << veradero << "      " << veradero + veradero << std::endl;
  std::cout << "Tabla lógica NOT" << std::endl;
  std::cout << "-----------------" << std::endl;
  std::cout << "A         salida" << std::endl;
  std::cout << falso << "            " << !falso << std::endl;
  std::cout << veradero  << "            " <<!veradero << std::endl;
}
