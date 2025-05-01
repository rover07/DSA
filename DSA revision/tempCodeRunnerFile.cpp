int main()
{
    int size = 5;
    int *arr = new int[size];
    cout << sizeof(arr) << endl;
    cout << sizeof(*arr);
    return 0;
}