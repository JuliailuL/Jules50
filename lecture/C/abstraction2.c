void myFunction(char name[], int age) {
  printf("Hello %s. You are %d years old.\n", name, age);
}

int main() {
  myFunction("Liam", 3);
  myFunction("Jenny", 14);
  myFunction("Anja", 30);
  return 0;
}

void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    printf("%d\n", myNumbers[i]);
  }
}

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  myFunction(myNumbers);
  return 0;
}
/*
The function (myFunction) takes an array as its parameter (int myNumbers[5]), and loops
through the array elements with the for loop.

When the function is called inside main(), we pass along the myNumbers array, which outputs
the array elements.

Note that when you call the function, you only need to use the name of the array when passing
it as an argument myFunction(myNumbers). However, the full declaration of the array is needed
in the function parameter (int myNumbers[5]).
*/

int myFunction(int x, int y) {
  return x + y;
}

int main() {
  printf("Result is: %d", myFunction(5, 3));
  return 0;

  int result = myFunction(5, 3);
  printf("Result is = %d", result);
  return 0;
}

// ^ Both output 8!
