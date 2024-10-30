void binToDec(int num)
{
    int remainder = num % 2;
    int divisor = remainder / 2;
    cout << remainder << "  " << divisor;
};

int main()
{    
    int num;
    cout << "Enter number to convert";
    cin >> num;
    binToDec(num);
    return 0;
}