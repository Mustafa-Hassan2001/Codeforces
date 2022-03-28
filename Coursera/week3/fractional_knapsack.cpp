#include <iostream>
#include <vector>

using std::vector;

int sort(vector<int> &weights, vector<int> &values, int n) 
{
  for(int i = 0; i < n; i++) 
  {
    for(int j = i+1; j < n; j++) 
    {
      if(((double)values[i]/weights[i])<((double)values[j]/weights[j])) 
      {
        double temp = values[i];
        values[i] = values[j];
        values[j] = temp;
        temp = weights[i];
        weights[i] = weights[j];
        weights[j] = temp;

      }
    }
  }
  return 0;
}

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  double value = 0.0;

  // write your code here
  for(int i = 0; i <= sizeof(weights); i++)
  {
    if(capacity == 0)
      return value;
    
    int a = weights[i]<capacity?weights[i]:capacity;
    value += (double)(a*((double)values[i]/weights[i]));
    weights[i] -= a;
    capacity -= a;
  }

  return value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }
  sort(weights,values,n);
  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
