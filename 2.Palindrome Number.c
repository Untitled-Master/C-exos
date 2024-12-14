bool isPalindrome(int x) {
  if (x < 0) {
      return false;
  }
  int number = x;
  int number2 = 0;
  while (x != 0) {
      number2 = number2 * 10 + x % 10;
      x = x / 10;
  }
  if (number == number2) {
      return true;
  } else {
      return false;
  }
}
