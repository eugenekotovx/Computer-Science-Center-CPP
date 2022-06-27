int power(int x, unsigned p) {
    int answer;
    {
    if (p == 0)
        answer = 1;
    else if (p % 2 == 0)
        answer = power(x, p / 2) * power(x, p / 2);
    else
        answer = x * power(x, p / 2) * power(x, p / 2);
    }
    return answer;
}