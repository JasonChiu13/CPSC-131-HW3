#include <iostream>
using namespace std;

struct node {
  int data;
  node* next;
};

int sum (int a[], int i) {
  if (i == 1) {
    return a[0];
  }
  return a[i - 1] + sum(a, i - 1);
}

int factorial(int x) {
  if (x == 1) {
    return 1;
  }
  return x * factorial(x - 1);
}

int fib(int x) {
  if (x <= 1) {
    return x;
  }
  return fib(x - 1) + fib(x - 2);
}

int size(node *curr) {
  if (curr->next == nullptr) {
    return 0;
  }
  return 1 + size(curr->next);
}

int get(node *curr, int i) {
  if (i == 0) {
    return curr->data;
  }
  return get(curr->next, i - 1);
}

int main () {
  int arr[] = {1, 2, 3, 4, 5};
  cout << "Sum of array: " << sum(arr, 5) << endl;
  cout << "Factorial of 5: " << factorial(5) << endl;
  cout << "Fibonacci sequence of 5: " << fib(5) << endl;
  cout << "Array of size 5: " << size() << endl;

  node head;
  node sec;
  node third;
  node fourth;
  head.data = 1;
  head.next = &sec;
  sec.data = 2;
  sec.next = &third;
  third.data = 3;
  third.next = &fourth;
  fourth.data = 4;
  fourth.next = nullptr;
  cout << "Fourth value of linked list: " << get(head, 4) << endl;
  return 0;
}