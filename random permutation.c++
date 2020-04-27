#include <bits/stdc++.h> 
using namespace std; 
  

vector<int> permutation; 
  

void printPermutation() 
{ 
    for (auto i : permutation) 
        cout << i << " "; 
} 
  

int give_random_number(int l, int r) 
{ 
    int x = rand() % (r - l + 1) + l; 
    return x; 
} 
  

void generate_random_permutation(int l, int r) 
{ 
  
    
    if (l > r) 
        return; 
  
     
    int n = give_random_number(l, r); 
  
     
    permutation.push_back(n); 
  
    
    generate_random_permutation(l, n - 1); 
  
    
    generate_random_permutation(n + 1, r); 
} 
  

int main() 
{ 
    int l = 5; 
    int r = 15; 
  
    
    generate_random_permutation(l, r); 
  
    
    printPermutation(); 
  
    return 0; 
} 
