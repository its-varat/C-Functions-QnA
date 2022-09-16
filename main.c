// find the sum of the series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5
int main() {
  int num = 1, sum = 0, fact;

  while (num <= 5) {
    fact = 1;
    for (int i = 1; i <= num; i++) {
      fact = fact * i;
    }

    sum = sum + (fact / num);

    num++;
  }

  printf("Sum of series is %d\n", sum);

  return 0;
}
