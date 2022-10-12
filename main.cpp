#include <iostream>
#include <cmath>

using namespace std;

int main() {

  int N, C, temp;
  cin >> N;
  cin >> C;
  int sort[N];
  int numbers[C]; // tracks frequency of a specific number in sort[]

  // for loops
  for(int i = 0; i < N; i++){
    
      cin >> sort[i];
  
  
  }
  for(int i = 0; i < N; i++){
    
    for(int j = 0; j < C; j++){
      
    if (sort[i] == (j + 1)){ // checks if number in sort[] equals C
      numbers[j]++;

      }
    }

  }

  for(int i = 0; i < N - 1; i++){
    
    for(int j = 0; j < C; j++){
      
    if (numbers[sort[i]-1] < numbers[sort[i+1] - 1]){ // checking frequency of N in sort
      temp = sort[i];
      sort[i] = sort[i + 1];
      sort[i + 1] = temp;
      }
    else

      if(sort[i] < sort[i + 1]){
      
      temp = sort[i];
      sort[i] = sort[i + 1];
      sort[i + 1] = temp;
        
      }

      
    }
      
  }
  for(int i = 0; i < N; i++){
    
      cout << sort[i];
  
  
  }
}
