#include <iostream>
#include "funcs.h"
#include <string>

int main ()
{
  //Task A Tests
  std::cout << "\n" << "Printing Boxes..." << "\n";
  std::cout << "\n------------------\n";
  std::cout << box(3,5);
  std::cout << "\n------------------\n";
  std::cout << box(14,26);
  std::cout << "\n------------------\n";

  
  //Task B Tests
  std::cout << "\n" << "Printing Checkerboard..." << "\n";
  std::cout << "\n------------------\n";
  std::cout << checkerboard(11,6);
  std::cout << "\n------------------\n";
  std::cout << checkerboard(20,20);
  std::cout << "\n------------------\n";

  

  //Task C Tests
  std::cout << "\n" << "Printing Cross..." << "\n";
  std::cout << "\n------------------\n";
  std::cout << cross(8);
  std::cout << "\n------------------\n";
  std::cout << cross(11);
  std::cout << "\n------------------\n";
  

  
  //Task D Tests
  std::cout << "\n" << "Printing Lower Square..." << "\n";
  std::cout << "\n------------------\n";
  std::cout << lower(6);
  std::cout << "\n------------------\n";
  std::cout << lower(10);
  std::cout << "\n------------------\n";

  
  //Task E Tests 
  std::cout << "\n" << "Printing Upper Square..." << "\n";
  std::cout << "\n------------------\n";
  std::cout << upper(5);
  std::cout << "\n------------------\n";
  std::cout << upper(14);
  std::cout << "\n------------------\n";

  
  //Task F Tests
  std::cout << "\n" << "Printing Trapezoid..." << "\n";
  std::cout << "\n------------------\n";
  std::cout << trapezoid(12,5);
  std::cout << "\n------------------\n";
  std::cout << trapezoid(12,7);
  std::cout << "\n------------------\n";

  
  //Task G Tests
  std::cout << "\n" << "Printing Checkerboard3x3..." << "\n";
  std::cout << "\n------------------\n";
  std::cout << checkerboard3x3(27,27);
  std::cout << "\n------------------\n";
  std::cout << checkerboard3x3(16,11);
  std::cout << "\n------------------\n";
  
}
