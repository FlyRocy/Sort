

template<class T>
void bubble_sort( T* a, int n)
{
    int i, j;
    T temp;
    for (j=0; j<n-1; j++)
    {
        for (i=0; i<n-1-j; i++)
        {
            if (a[i] < a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
}