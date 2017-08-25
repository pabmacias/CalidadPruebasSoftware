#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <string>

class Scanner
{
public:
  std::vector<int> vector_ports;
  int port;

  Scanner() {};

  void createVectorPort()
  {
    system("nmap -sTU localhost | grep -i open > ports.txt");

    std::ifstream inFile;
    std::string x;
    std::string line;
    int test=0;

    inFile.open("ports.txt");
    if (!inFile) {
        std::cout << "Unable to open file";
        exit(1);
    }

    while (std::getline(inFile, x))
    {
      line = x.substr(0, x.find("/", 0));
      vector_ports.push_back(stoi(line));
    }

    inFile.close();
  }

  bool checkPort(int port)
  {
    for (auto i : vector_ports)
    {
      if (i == port)
        return true;
    }

    return false;
  }

  void printPorts()
  {
    for (auto i : vector_ports)
    {
        std::cout << ' ' << i <<std::endl;
    }
  }

};

/*int main()
{
  Scanner * s = new Scanner;
  s->createVectorPort();
  s->printPorts();
  s->checkPort(22);

  return 0;
}*/
