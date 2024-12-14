int mySqrt(long long int x) {
    double sqrt = 0;
    while (sqrt * sqrt <= x) {
        sqrt++;
    }
    return sqrt - 1;
}
