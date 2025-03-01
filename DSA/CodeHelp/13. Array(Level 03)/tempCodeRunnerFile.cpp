 int transpose[3][4];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transpose[i][j] = arr[j][i];
        }
    }
    cout << "Transpose of the marix is:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
