string intToStr(int num) {
    if (num == 0) {
        return "0";
    }

    string result = "";
    while (num > 0) {
        char digit = '0' + (num % 10);
        result = digit + result;
        num /= 10;
    }

    return result;
}