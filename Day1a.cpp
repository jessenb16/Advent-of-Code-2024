#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
     std::ifstream inputFile("input.txt");
     std::vector<int> vector1;
     std::vector<int> vector2;

     if (inputFile.is_open()) {
          int num1, num2;
          while (inputFile >> num1 >> num2) {
               vector1.push_back(num1);
               vector2.push_back(num2);
          }
          inputFile.close();
     } else {
          std::cerr << "Unable to open file";
     }

     sort(vector1.begin(), vector1.end());
     sort(vector2.begin(), vector2.end());

     int total = 0;
     for (int i = 0; i < vector1.size(); i++)
     {
          total += abs(vector1[i] - vector2[i]);
     }

     cout << total << endl;

     return 0;
}
