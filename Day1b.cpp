#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
 
     ifstream inputFile("input.txt");
     vector<int> vector1;
     unordered_map<int, int> map1;

     if (inputFile.is_open()) {
          int num1, num2;
          while (inputFile >> num1 >> num2) {
               vector1.push_back(num1);
               map1[num2]++;
          }
          inputFile.close();
     } else {
          cerr << "Unable to open file";
     }

     int total = 0;

     for(int i = 0; i < vector1.size(); i++){
          if(map1.find(vector1[i]) != map1.end()){
               total += vector1[i] * map1[vector1[i]];
          }
     }
     cout << total << endl;
}
