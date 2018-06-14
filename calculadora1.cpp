/*
CALCULATOR
*/

 #include <iostream>     // Basic Library
 #include <fstream>		// Library that allows reading or writing in files
 #include <conio.h>		// Library that allows reading key press
 #include <windows.h>	// Library that allows sleep function
 #include <stdio.h>     // Library that allows to change the background and text color
 using namespace std;    // Setting up the cout<< and cin>> functions

int main(){

// HEADER //

int input2;

Sleep (2000);

std::cout << "1.Suma" << '\n';
std::cout << "2.Resta" << '\n';
std::cout << "3.Multiplicación" << '\n';
std::cout << "4.División" << '\n';
std::cout << "qué operación deseas realizar? teclea el número y pulsa enter:" << '\n';

std::cin >> input2;

float inputS1;
float inputS2;
float RS = 0;
float inputR1;
float inputR2;
float RR = 0;
float inputM1;
float inputM2;
float RM = 1;
float inputD1;
float inputD2;
float RD = 1;

do {
  system ("cls");

  Sleep (1000);

  // SUMA //
  if{input2=1
  }
  do{[

    std::cout << "            SUMA             " << '\n';
    std::cout << "     valor A + valor B       " << '\n';
    std::cout << "            ...              " << '\n';
    std::cout << " introduce valor A:          " << '\n';
    std::cout << " introduce valor B:          " << '\n';

    std::cin >> inputS1;
    system ("cls");

    std::cout << "            SUMA             " << '\n';
    std::cout << "     valor A + valor B       " << '\n';
    std::cout << "            ...              " << '\n';
    std::cout << " introduce valor A:" inputS1   << '\n';
    std::cout << " introduce valor B:          " << '\n';

    std::cin >> inputS2;
    system ("cls");

    std::cout << "            SUMA             " << '\n';
    std::cout << "     valor A + valor B       " << '\n';
    std::cout << "            ...              " << '\n';
    std::cout << " introduce valor A:" inputS1   << '\n';
    std::cout << " introduce valor B:" inputS2   << '\n';

    RS = RS+inputS1+inputS2;
    system ("cls");

    std::cout << "            SUMA             " << '\n';
    std::cout << "     valor A + valor B       " << '\n';
    std::cout << "            ...              " << '\n';
    std::cout <<     inputS1 "+" inputS2 "=" RS  << '\n';

    Sleep(3000);

    std::cout << "1.Suma" << '\n';
    std::cout << "2.Resta" << '\n';
    std::cout << "3.Multiplicación" << '\n';
    std::cout << "4.División" << '\n';
    std::cout << "qué operación deseas realizar ahora? teclea el número y pulsa enter:" << '\n';

    std::cin >> input2;

      ]}

  // RESTA //
  if{input2=2
  }
  do{[
    std::cout << "           RESTA             " << '\n';
    std::cout << "     valor A - valor B       " << '\n';
    std::cout << "            ...              " << '\n';
    std::cout << " introduce valor A:          " << '\n';
    std::cout << " introduce valor B:          " << '\n';

    std::cin >> inputR1;
    system ("cls");

    std::cout << "           RESTA             " << '\n';
    std::cout << "     valor A - valor B       " << '\n';
    std::cout << "            ...              " << '\n';
    std::cout << " introduce valor A:" inputR1   << '\n';
    std::cout << " introduce valor B:          " << '\n';

    std::cin >> inputR2;
    system ("cls");

    std::cout << "           RESTA             " << '\n';
    std::cout << "     valor A - valor B       " << '\n';
    std::cout << "            ...              " << '\n';
    std::cout << " introduce valor A:" inputR1   << '\n';
    std::cout << " introduce valor B:" inputR2   << '\n';

    RR = RR+inputR1+inputR2;
    system ("cls");

    std::cout << "           RESTA             " << '\n';
    std::cout << "     valor A - valor B       " << '\n';
    std::cout << "            ...              " << '\n';
    std::cout <<     inputR1 "-" inputR2 "=" RR  << '\n';

    Sleep(3000);

    std::cout << "1.Suma" << '\n';
    std::cout << "2.Resta" << '\n';
    std::cout << "3.Multiplicación" << '\n';
    std::cout << "4.División" << '\n';
    std::cout << "qué operación deseas realizar ahora? teclea el número y pulsa enter:" << '\n';

    std::cin >> input2;

    ]}

  // MULTIPLICACIÓN //
  if{input2=3
  }
  do{[
    std::cout << "      MULTIPLICACIÓN         " << '\n';
    std::cout << "     valor A x valor B       " << '\n';
    std::cout << "            ...              " << '\n';
    std::cout << " introduce valor A:          " << '\n';
    std::cout << " introduce valor B:          " << '\n';

    std::cin >> inputM1;
    system ("cls");

    std::cout << "      MULTIPLICACIÓN         " << '\n';
    std::cout << "     valor A x valor B       " << '\n';
    std::cout << "            ...              " << '\n';
    std::cout << " introduce valor A:" inputM1   << '\n';
    std::cout << " introduce valor B:          " << '\n';

    std::cin >> inputM2;
    system ("cls");

    std::cout << "      MULTIPLICACIÓN         " << '\n';
    std::cout << "     valor A x valor B       " << '\n';
    std::cout << "            ...              " << '\n';
    std::cout << " introduce valor A:" inputM1   << '\n';
    std::cout << " introduce valor B:" inputM2   << '\n';

    RM = RM+inputM1+inputM2;
    system ("cls");

    std::cout << "      MULTIPLICACIÓN         " << '\n';
    std::cout << "     valor A x valor B       " << '\n';
    std::cout << "            ...              " << '\n';
    std::cout <<     inputM1 "x" inputM2 "=" RM  << '\n';

    Sleep(3000);

    std::cout << "1.Suma" << '\n';
    std::cout << "2.Resta" << '\n';
    std::cout << "3.Multiplicación" << '\n';
    std::cout << "4.División" << '\n';
    std::cout << "qué operación deseas realizar ahora? teclea el número y pulsa enter:" << '\n';

    std::cin >> input2;

    ]}

  // DIVISIÓN //
  if{input2=4
  }
  do{[
    std::cout << "         DIVISIÓN            " << '\n';
    std::cout << "     valor A / valor B       " << '\n';
    std::cout << "            ...              " << '\n';
    std::cout << " introduce valor A:          " << '\n';
    std::cout << " introduce valor B:          " << '\n';

    std::cin >> inputD1;
    system ("cls");

    std::cout << "         DIVISIÓN            " << '\n';
    std::cout << "     valor A / valor B       " << '\n';
    std::cout << "            ...              " << '\n';
    std::cout << " introduce valor A:" inputD1   << '\n';
    std::cout << " introduce valor B:          " << '\n';

    std::cin >> inputD2;
    system ("cls");

    std::cout << "         DIVISIÓN            " << '\n';
    std::cout << "     valor A / valor B       " << '\n';
    std::cout << "            ...              " << '\n';
    std::cout << " introduce valor A:" inputD1   << '\n';
    std::cout << " introduce valor B:" inputD2   << '\n';

    RD = RD+inputD1+inputD2;
    system ("cls");

    std::cout << "         DIVISIÓN            " << '\n';
    std::cout << "     valor A / valor B       " << '\n';
    std::cout << "            ...              " << '\n';
    std::cout <<     inputD1 "x" inputD2 "=" RD  << '\n';

    Sleep(3000);

    std::cout << "1.Suma" << '\n';
    std::cout << "2.Resta" << '\n';
    std::cout << "3.Multiplicación" << '\n';
    std::cout << "4.División" << '\n';
    std::cout << "qué operación deseas realizar ahora? teclea el número y pulsa enter:" << '\n';

    std::cin >> input2;

    ]}

} while(input2 > 0);
