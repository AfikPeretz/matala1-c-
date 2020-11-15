double Power (double x , int y) {
    double answer=1;
    if (y==0) {
        return 1;
    } else if (y==1) {
        return x;
    } else if (y < 0) {
        answer=x;
        for (int i=1; i<y; i++) {
            answer *= x;
        }
        return 1/answer;
    } else if (y>1) {
        answer=x;
        for (int i=1; i<y; i++) {
            answer *= x;
        }
        return answer;
    }
    return answer;
}

double Exponent (int x)
{
Power(2.7182, x);
}

